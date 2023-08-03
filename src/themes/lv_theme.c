/**
 * @file lv_theme.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static lv_style_res_t generic_get_prop_cb(lv_theme_components_t * comp, lv_obj_t * obj, lv_style_prop_t prop,
                                          lv_part_t part, lv_style_value_t * v, int32_t * weight);

/**********************
 *  STATIC VARIABLES
 **********************/
static uint32_t last_component_id;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_theme_init(void)
{
    LV_OBJ_ID = last_component_id;
    last_component_id++;

#if LV_USE_BTN
    LV_BTN_ID = last_component_id;
    last_component_id++;
#endif

#if LV_USE_LABEL
    LV_LABEL_ID = last_component_id;
    last_component_id++;
#endif

}

lv_theme_t  * lv_theme_get_from_obj(lv_obj_t * obj)
{
    lv_disp_t * disp = obj ? lv_obj_get_disp(obj) : lv_disp_get_default();
    return lv_disp_get_theme(disp);
}

const lv_font_t * lv_theme_get_font_small(lv_obj_t * obj)
{
    lv_theme_t * th = lv_theme_get_from_obj(obj);
    return th ? th->font_small : LV_FONT_DEFAULT;
}

const lv_font_t * lv_theme_get_font_normal(lv_obj_t * obj)
{
    lv_theme_t * th = lv_theme_get_from_obj(obj);
    return th ? th->font_normal : LV_FONT_DEFAULT;
}

const lv_font_t * lv_theme_get_font_large(lv_obj_t * obj)
{
    lv_theme_t * th = lv_theme_get_from_obj(obj);
    return th ? th->font_large : LV_FONT_DEFAULT;
}

lv_color_t lv_theme_get_color_primary(lv_obj_t * obj)
{
    lv_theme_t * th = lv_theme_get_from_obj(obj);
    return th ? th->color_primary : lv_palette_main(LV_PALETTE_BLUE_GREY);
}

lv_color_t lv_theme_get_color_secondary(lv_obj_t * obj)
{
    lv_theme_t * th = lv_theme_get_from_obj(obj);
    return th ? th->color_secondary : lv_palette_main(LV_PALETTE_BLUE);
}

lv_theme_components_t * lv_theme_add_component(lv_theme_t * theme, uint32_t comp_id)
{
    if(theme->components_cnt <= comp_id) {
        theme->components = lv_realloc(theme->components, sizeof(lv_theme_components_t) * (comp_id + 1));
        lv_memzero(&theme->components[theme->components_cnt],
                   sizeof(lv_theme_components_t) * (comp_id + 1 - theme->components_cnt));
        theme->components_cnt = comp_id + 1;
    }

    theme->components[comp_id].get_prop_cb = generic_get_prop_cb;
    return &theme->components[comp_id];
}


void lv_theme_add_style(lv_theme_t * theme, uint32_t component_id, const lv_style_t * style,
                        lv_style_selector_t selector)
{

    lv_theme_components_t * comp = &theme->components[component_id];

    /*Allocate space for the new style and shift the rest of the style to the end*/
    comp->style_cnt++;
    comp->styles = lv_realloc(comp->styles, comp->style_cnt * sizeof(_lv_style_with_selector_t));
    LV_ASSERT_MALLOC(comp->styles);

    uint32_t i;
    for(i = comp->style_cnt - 1; i >= 1 ; i--) {
        comp->styles[i] = comp->styles[i - 1];
    }

    lv_memzero(&comp->styles[0], sizeof(_lv_style_with_selector_t));
    comp->styles[0].style = style;
    comp->styles[0].selector = selector;

    //    lv_obj_refresh_style(obj, selector, LV_STYLE_PROP_ANY);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


static lv_style_res_t generic_get_prop_cb(lv_theme_components_t * comp, lv_obj_t * obj, lv_style_prop_t prop,
                                          lv_part_t part, lv_style_value_t * v, int32_t * weight)
{
    lv_style_res_t res = LV_STYLE_RES_NOT_FOUND;
    uint8_t group = 1 << _lv_style_get_prop_group(prop);

    lv_state_t state = obj->state;
    lv_state_t state_inv = ~state;

    lv_style_value_t value_tmp;

    uint32_t i;
    for(i = 0; i < comp->style_cnt; i++) {
        if((comp->styles[i].style->has_group & group) == 0) continue;
        _lv_style_with_selector_t * comp_style = &comp->styles[i];
        lv_part_t part_act = lv_obj_style_get_selector_part(comp_style->selector);
        lv_state_t state_act = lv_obj_style_get_selector_state(comp_style->selector);
        if(part_act != part) continue;

        /*Be sure the style not specifies other state than the requested.
         *E.g. For HOVER+PRESS object state, HOVER style only is OK, but HOVER+FOCUS style is not*/
        if((state_act & state_inv)) continue;

        /*Check only better candidates*/
        if(state_act <= *weight) continue;

        res = lv_style_get_prop(comp_style->style, prop, &value_tmp);

        if(res == LV_STYLE_RES_FOUND) {
            if(state_act == state) {
                *v = value_tmp;
                *weight = state_act;
                return LV_STYLE_RES_FOUND;
            }
            if(*weight < state_act) {
                *weight = state_act;
                *v = value_tmp;
            }
        }
        else if(res == LV_STYLE_RES_INHERIT) {
            return LV_STYLE_RES_INHERIT;
        }
    }

    if(*weight >= 0) {
        *v = value_tmp;
        return LV_STYLE_RES_FOUND;
    }
    else return LV_STYLE_RES_NOT_FOUND;


}

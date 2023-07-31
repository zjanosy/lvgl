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
static void apply_theme(lv_theme_t * th, lv_obj_t * obj);
static void apply_theme_recursion(lv_theme_t * th, lv_obj_t * obj);

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
#if LV_USE_BTN
    LV_BTN_ID = last_component_id;
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

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void apply_theme(lv_theme_t * th, lv_obj_t * obj)
{
    if(th->parent) apply_theme(th->parent, obj);
    if(th->apply_cb) th->apply_cb(th, obj);
}

static void apply_theme_recursion(lv_theme_t * th, lv_obj_t * obj)
{
    const lv_obj_class_t * original_class_p = obj->class_p;

    if(obj->class_p->base_class && obj->class_p->theme_inheritable == LV_OBJ_CLASS_THEME_INHERITABLE_TRUE) {
        /*Apply the base class theme in obj*/
        obj->class_p = obj->class_p->base_class;

        /*apply the base first*/
        apply_theme_recursion(th, obj);
    }

    /*Restore the original class*/
    obj->class_p = original_class_p;

    apply_theme(th, obj);
}

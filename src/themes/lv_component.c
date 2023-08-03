/**
 * @file lv_component.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    uint32_t parent_id;
} lv_component_id_t;

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
static uint32_t last_component_id = 1;
static lv_component_id_t * id_list;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_component_init(void)
{
    LV_SCREEN_ID = last_component_id;
    last_component_id++;

    LV_SCREEN_LAYER_ID = last_component_id;
    last_component_id++;

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

    id_list = lv_malloc(sizeof(lv_component_id_t) * last_component_id);
    lv_memzero(id_list, sizeof(lv_component_id_t) * last_component_id);
}

uint32_t lv_component_register(uint32_t parent_component_id)
{
    last_component_id++;

    id_list = lv_realloc(id_list, sizeof(lv_component_id_t) * last_component_id);

    id_list[last_component_id - 1].parent_id = parent_component_id;

    return last_component_id - 1;
}

lv_style_res_t lv_component_get_style_property(lv_theme_t * theme, lv_obj_t * obj, lv_style_prop_t prop,
                                               lv_style_selector_t selector, lv_style_value_t * v, int32_t * weight)
{
    uint32_t comp_id = obj->comp_id;

    while(comp_id) {
        if(obj->state == 0 && selector == 0) {
            uint32_t idx = prop >> 5;
            if((theme->components[comp_id].props[idx] & (1 << (prop & 0x1F)))) {
                *v = theme->components[comp_id].main_values[prop];
                *weight = 0;
                return LV_STYLE_RES_FOUND;
            }
        }
        else {
            lv_style_res_t res = theme->components[comp_id].get_prop_cb(&theme->components[comp_id], obj, prop, selector, v,
                                                                        weight);
            if(res == LV_RES_OK) return res;
        }
        comp_id = id_list[comp_id].parent_id;
    }

    return LV_STYLE_RES_NOT_FOUND;
}


/**********************
 *   STATIC FUNCTIONS
 **********************/

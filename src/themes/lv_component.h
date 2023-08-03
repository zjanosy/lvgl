/**
 * @file lv_templ.h
 *
 */

#ifndef LV_TEMPL_H
#define LV_TEMPL_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lv_theme.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

void lv_component_init(void);
uint32_t lv_component_register(uint32_t parent_component_id);
lv_res_t lv_component_get_style_property(lv_theme_t * theme, lv_obj_t * obj, lv_style_prop_t prop,
                                         lv_style_selector_t selector, lv_style_value_t * v, int32_t * weight);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_TEMPL_H*/

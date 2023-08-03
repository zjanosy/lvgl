/**
 *@file lv_theme.h
 *
 */

#ifndef LV_THEME_H
#define LV_THEME_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *    INCLUDES
 *********************/
#include "../core/lv_obj.h"

/*********************
 *    DEFINES
 *********************/

/**********************
 *    TYPEDEFS
 **********************/

struct _lv_theme_t;
struct _lv_disp_t;
struct _lv_theme_components_t;

typedef lv_style_res_t (*lv_theme_component_get_prop_cb)(struct _lv_theme_components_t * comp, lv_obj_t * obj,
                                                         lv_style_prop_t prop, lv_part_t part, lv_style_value_t * v, int32_t * weight);

typedef struct _lv_theme_components_t {
    /** Will be called to get a property*/
    lv_theme_component_get_prop_cb get_prop_cb;

    /**Set a bit for each property to quickly see if that property stored in styles or not */
    uint32_t props[256 / 32];       /*Bit field for 256 bits -> 256 style properties*/

    lv_style_value_t main_values[256];

    /** Store the styles of the component*/
    _lv_style_with_selector_t * styles;
    uint32_t style_cnt;

    void * user_data;
} lv_theme_components_t;


typedef struct _lv_theme_t {
    lv_theme_components_t * components;
    uint32_t components_cnt;
    void * user_data;
    struct _lv_disp_t * disp;
    lv_color_t color_primary;
    lv_color_t color_secondary;
    const lv_font_t * font_small;
    const lv_font_t * font_normal;
    const lv_font_t * font_large;
    uint32_t flags;                 /*Any custom flag used by the theme*/
} lv_theme_t;


/**********************
 *  GLOBAL PROTOTYPES
 **********************/

/**
 * Get the theme assigned to the display of the object
 * @param obj       pointer to a theme object
 * @return          the theme of the object's display (can be NULL)
 */
lv_theme_t  * lv_theme_get_from_obj(lv_obj_t * obj);


void lv_theme_add_style(lv_theme_t * theme, uint32_t component_id, const lv_style_t * style,
                        lv_style_selector_t selector);

/**
 * Get the small font of the theme
 * @param obj pointer to an object
 * @return pointer to the font
 */
const lv_font_t * lv_theme_get_font_small(lv_obj_t * obj);
/**
 * Get the normal font of the theme
 * @param obj pointer to an object
 * @return pointer to the font
 */
const lv_font_t * lv_theme_get_font_normal(lv_obj_t * obj);

/**
 * Get the subtitle font of the theme
 * @param obj pointer to an object
 * @return pointer to the font
 */
const lv_font_t * lv_theme_get_font_large(lv_obj_t * obj);

/**
 * Get the primary color of the theme
 * @param obj pointer to an object
 * @return the color
 */
lv_color_t lv_theme_get_color_primary(lv_obj_t * obj);

/**
 * Get the secondary color of the theme
 * @param obj pointer to an object
 * @return the color
 */
lv_color_t lv_theme_get_color_secondary(lv_obj_t * obj);

/**********************
 *    MACROS
 **********************/


#include "default/lv_theme_default.h"
#include "mono/lv_theme_mono.h"
#include "basic/lv_theme_basic.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_THEME_H*/

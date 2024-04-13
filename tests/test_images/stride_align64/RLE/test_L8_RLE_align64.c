
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DUST
#define LV_ATTRIBUTE_IMG_DUST
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DUST
uint8_t test_L8_RLE_align64_map[] = {

    0x01,0x00,0x00,0x00,0x20,0x0e,0x00,0x00,0xc1,0x12,0x00,0x00,0x47,0xdb,0x8b,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0x44,0xfd,0x8c,0xdb,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0x44,0xfd,0x96,0xdb,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xfd,0x27,0xfd,0x11,0x7e,0xff,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xdb,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xc4,0x7b,0x55,
    0x4c,0x4c,0x55,0x7b,0xc4,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xdb,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xe6,0x7d,0x4b,0x4b,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x7d,0xff,0xe6,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x9e,0x51,
    0x51,0x9e,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,
    0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xe6,0x6f,0x4b,0x4b,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x6f,0xe6,0xfd,0xfd,0xfd,0xfd,0xfd,0x51,0x4b,
    0x4b,0x51,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xdb,0xfd,0xff,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7d,0x4b,0x4b,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x7d,0xfd,0xfd,0xfd,0xfd,0xfd,0x51,
    0x4b,0x4b,0x51,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0x7e,0x7e,0x7e,
    0x7e,0x7e,0x7e,0x7e,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xc4,0x4b,0x4b,0x4b,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0xc4,0xfd,0xfd,0xfd,0xfd,0x9e,
    0x51,0x51,0x9e,0xfd,0xfd,0xfd,0xff,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7b,0x4b,0x4b,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x7b,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,
    0x7e,0x7e,0x7e,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xfd,0xfd,0xfd,0xfd,0xfd,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x55,0x4b,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x55,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,
    0x7e,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,0xfd,0x4c,0x4b,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4c,0xfd,0xfd,0xfd,
    0xc3,0x6b,0x4d,0x4d,0x6b,0xc3,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,
    0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xff,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,0xfd,0x4c,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4c,0xfd,0xfd,
    0xc3,0x56,0x4b,0x4b,0x4b,0x4b,0x56,0xc3,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,
    0xfd,0x7e,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,0xfd,0x55,0x4b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0xff,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x55,0xfd,
    0xfd,0x6b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x6b,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,
    0x7e,0xfd,0x7e,0x7e,0x7e,0x7e,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,0xfd,0x7b,
    0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x7b,0xfd,
    0xfd,0x4d,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4d,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,
    0x7e,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,0xdb,
    0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,0xfd,
    0xc4,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0xc4,
    0xfd,0xfd,0x4d,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4d,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,
    0xfd,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0xfd,0x7e,0xfd,0x7e,0xfd,0xfd,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,0xfd,
    0xfd,0x7d,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x7d,0xfd,
    0xfd,0xfd,0x6b,0x4b,0x4b,0x4b,0xff,0x4b,0x4b,0x4b,0x6b,0xfd,0xfd,0xfd,0x7e,0xfd,
    0x7e,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0xfd,0x7e,0xfd,
    0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,
    0xfd,0xfd,0xe6,0x6f,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x6f,0xe6,
    0xfd,0xfd,0xfd,0xc3,0x56,0x4b,0x4b,0x4b,0x4b,0x56,0xc3,0xfd,0xfd,0xfd,0x7e,0xfd,
    0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0xfd,0x7e,0xfd,
    0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xc7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xe6,0x7d,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x7d,0xe6,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xc3,0x6b,0x4d,0x4d,0x6b,0xc3,0xfd,0xfd,0xfd,0xfd,0x7e,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,
    0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0x18,0xfd,
    0xb8,0xc4,0x7b,0x55,0x4c,0x4c,0x55,0x7b,0xc4,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,
    0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0xfd,0xfd,0xdb,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0x44,0xfd,0x8c,0xdb,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0x44,0xfd,0xa0,0xdb,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xeb,0xd5,0xcb,
    0xd8,0xf6,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x00,0x2e,0x00,0x9d,0xfd,0xfd,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xc8,
    0x69,0x21,0x00,0x00,0x00,0x00,0x04,0x3a,0xa2,0xfc,0xfd,0x35,0xfd,0x9c,0xdb,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0x4c,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x43,0xf2,0xfd,0x34,0xfd,0x9c,0xdb,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0x15,0x00,0x00,0x00,0x00,
    0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x55,0xfd,0x34,0xfd,0x9d,0xdb,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0x19,0x00,0x00,0x19,0xb5,0xf5,
    0xfb,0xc2,0x21,0x00,0x00,0x00,0x00,0xd3,0xfd,0x33,0xfd,0xad,0xdb,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0x1d,0x00,0x00,0x5a,0xfd,0xfd,
    0xfd,0xfd,0xba,0x00,0x00,0x00,0x00,0x8f,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xea,0x88,0x43,0x21,0x18,0x2b,0x60,0xc7,0xfd,0x23,0xfd,0xae,0xdb,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0x40,0x22,0x22,0x93,0xfd,0xfd,
    0xfd,0xfd,0xf5,0x00,0x00,0x00,0x00,0x75,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xab,
    0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0xfd,0x22,0xfd,0xaf,0xdb,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xf0,0xea,0xea,0x00,0x00,0x00,0x00,0x6e,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0x92,0x00,0x00,0x1e,0x73,0x7b,0x24,0x00,0x00,0x00,0xc7,0xfd,0x21,0xfd,0xaf,0xdb,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xfd,0xfc,0xac,
    0x5a,0x1c,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6e,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0x96,0x00,0x00,0xbe,0xfd,0xfd,0xea,0x0d,0x00,0x00,0x72,0xfd,0x14,0xfd,
    0xbc,0x00,0xfd,0x00,0xfd,0xfd,0x00,0xfd,0xfd,0xfd,0x00,0xfd,0xfd,0xfd,0xdb,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,0xe0,0x34,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6e,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xbd,0x5a,0x5a,0xeb,0xfd,0xfd,0xfd,0x39,0x00,0x00,0x56,0xfd,0x21,0xfd,0xbc,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xf0,0x21,0x00,
    0x00,0x00,0x00,0x17,0x3d,0x46,0x46,0x00,0x00,0x00,0x00,0x6e,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xeb,0xa8,0x84,0x72,0x6e,0x1a,0x00,0x00,0x52,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xea,0xa0,0x80,0x92,0xe0,0xfd,0x14,0xfd,0xbd,0xdb,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x85,0x00,0x00,0x00,
    0x00,0x85,0xfb,0xfd,0xfd,0xfd,0x00,0x00,0x00,0x00,0x6e,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfc,0x7d,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x52,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xeb,0x07,0x00,0x1d,0x02,0x05,0xbc,0xfd,0x13,0xfd,0xff,0xdb,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x43,0x00,0x00,0x00,
    0x2a,0xfd,0xfd,0xfd,0xfd,0xfd,0x00,0x00,0x00,0x00,0x6e,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0x7c,0x00,0x00,0x00,0x42,0x71,0x76,0x1c,0x00,0x00,0x52,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xea,0x00,0x80,0xfd,0xa1,0x00,0x49,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0x00,0xfd,0x00,0xfd,0xfd,0x00,0xfd,0xfd,0xfd,0x00,0xfd,0xfd,0xfd,0xdb,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x2d,0x00,0x00,0x00,
    0x36,0xfd,0xfd,0xfd,0xfd,0xd4,0x00,0x00,0x00,0x00,0x6e,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfb,0x0b,0x00,0x00,0x70,0xfd,0xfd,0xfd,0x3e,0x00,0x00,0x52,0xfd,0x8e,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfb,0xdc,0xb5,0x9d,0x7a,0x00,0x2f,0xfd,0x13,0xfd,0xbd,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x49,0x00,0x00,
    0x00,0x00,0x8e,0xe6,0xdf,0x92,0x12,0x00,0x00,0x00,0x00,0x6a,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xe5,0x00,0x00,0x00,0xa8,0xfd,0xfd,0xfb,0x2a,0x00,0x00,0x52,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xee,0x32,0x00,0x20,0x25,0x00,0x2e,0xfd,0x13,0xfd,0xff,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0x9a,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x22,0xb1,0xfd,0xfd,
    0xfd,0xfd,0xf7,0x07,0x00,0x00,0x2a,0xa6,0x9f,0x39,0x00,0x00,0x00,0x3d,0xdf,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0x92,0x00,0x5a,0xfd,0xce,0x00,0x2e,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0x00,0xfd,0x00,0xfd,0xfd,0x00,0xfd,0xfd,0xfd,0x00,0xfd,0xfd,0xfd,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfa,0x3c,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x4b,0x39,0x00,0x00,0x00,0x00,0x00,0x9a,0xfd,0xfd,
    0xfd,0xfd,0xfd,0x69,0x00,0x00,0x00,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x00,0x8f,
    0xf1,0xfd,0xfd,0xfd,0xfd,0xfd,0x9a,0x00,0x29,0x9a,0x40,0x00,0x1f,0xd8,0xfd,0x12,
    0xfd,0xff,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,
    0xf4,0x6c,0x08,0x00,0x00,0x00,0x0b,0x7b,0xf9,0x8c,0x00,0x00,0x00,0x00,0x00,0x9a,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xf7,0x66,0x04,0x00,0x00,0x13,0xa2,0x9e,0x00,0x00,0x00,
    0x00,0xf1,0xfd,0xfd,0xfd,0xfd,0xfd,0xf5,0x42,0x00,0x02,0x7b,0x05,0x00,0x62,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0x00,0xfd,0x00,0xfd,0xfd,0x00,0xfd,0xfd,0xfd,0x00,0xfd,
    0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xf4,0xc3,0xb0,0xc2,0xf2,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xf0,0xc7,0xcd,0xf8,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0x8b,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xea,0xef,0xfd,0x16,0xfd,0x8c,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0x44,0xfd,0xff,0xdb,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xe3,0xe2,0xe1,0xe0,
    0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdc,0xdd,
    0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,
    0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,0xf7,0xf7,0xf8,0xf8,0xf8,
    0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xdb,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xe3,0xe2,0xe1,0xe0,
    0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdc,0xdd,
    0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,0xf5,0xf5,0xf5,0xff,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,0xf7,0xf7,0xf7,0xf8,
    0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xe3,0xe2,0xe1,
    0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdc,
    0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,0xf7,0xf7,0xf7,0xf8,
    0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xe3,0xff,0xe2,
    0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,
    0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,0xf5,0xf5,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,0xf7,0xf7,0xf7,
    0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xe3,0xe2,
    0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,
    0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,0xf5,0xf5,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,0xf7,0xff,0xf7,
    0xf7,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xe3,
    0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,
    0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,0xf5,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,0xf7,0xf7,
    0xf8,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,0xe3,
    0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,0xff,0xdb,
    0xdb,0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,0xf7,
    0xf7,0xf7,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,0xfd,
    0xe3,0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,
    0xdb,0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,0xf7,
    0xf7,0xf7,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xff,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,
    0xfd,0xe3,0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,
    0xdb,0xdb,0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf7,
    0xf7,0xf7,0xf7,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xfd,
    0xfd,0xe3,0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,0xdb,
    0xdb,0xdb,0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xff,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,
    0xf7,0xf7,0xf7,0xf8,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,
    0xfd,0xfd,0xe3,0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,0xdb,
    0xdb,0xdb,0xdb,0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,0xf5,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,
    0xf7,0xf7,0xf7,0xf7,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,0xfd,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,
    0xdb,0xfd,0xfd,0xe3,0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,
    0xdb,0xdb,0xdb,0xdb,0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,
    0xf7,0xf7,0xf7,0xf7,0xf7,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,0xfc,
    0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xdb,0xfd,0xfd,0xe3,0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,0xdb,
    0xdb,0xdb,0xdb,0xdb,0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,0xf2,
    0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf4,0xf6,
    0xf6,0xf6,0xf7,0xf7,0xf7,0xf7,0xf8,0xf8,0xf8,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,
    0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xdb,0xfd,0xfd,0xe3,0xe2,0xe1,0xe0,0xdf,0xde,0xdd,0xdd,0xdc,0xdc,0xdb,0xdb,
    0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdc,0xdd,0xde,0xe0,0xe1,0xe3,0xe6,0xe8,0xeb,0xee,
    0xf2,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,
    0xf6,0xf6,0xf7,0xf7,0xf7,0xf7,0xf8,0xf8,0xf9,0xf9,0xf9,0xfa,0xfa,0xfb,0xfb,0xfc,
    0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xdb,0xfd,0x44,0xfd,0x8c,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xdb,0xfd,0x44,0xfd,0x8c,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,
    0xfd,0x44,0xfd,0x8b,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0x46,
    0xdb,0x8a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t test_L8_RLE_align64 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_L8,
  .header.flags = 0 | LV_IMAGE_FLAGS_COMPRESSED,
  .header.w = 71,
  .header.h = 60,
  .header.stride = 80,
  .data_size = sizeof(test_L8_RLE_align64_map),
  .data = test_L8_RLE_align64_map,
};


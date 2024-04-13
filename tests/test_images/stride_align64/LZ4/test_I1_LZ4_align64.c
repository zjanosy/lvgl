
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
uint8_t test_I1_LZ4_align64_map[] = {

    0x02,0x00,0x00,0x00,0x93,0x01,0x00,0x00,0xc8,0x03,0x00,0x00,0x9b,0x56,0x82,0x0a,
    0xfa,0x43,0xbe,0xeb,0x3b,0x00,0x01,0x00,0x22,0x7f,0xff,0x01,0x00,0x13,0xfc,0x18,
    0x00,0x0c,0x10,0x00,0x93,0x60,0x00,0x1f,0xff,0xff,0xff,0xe0,0x00,0x0c,0x20,0x00,
    0x96,0x60,0x00,0x1f,0xf0,0xff,0xff,0xef,0xff,0xec,0x10,0x00,0x66,0xc0,0x3f,0xe7,
    0xe8,0x00,0x2c,0x10,0x00,0x69,0x00,0x0f,0xc3,0xeb,0xff,0xac,0x10,0x00,0x26,0xea,
    0x00,0x10,0x00,0x69,0x1e,0x00,0x07,0xe7,0xea,0xfe,0x10,0x00,0x36,0xff,0xea,0x82,
    0x10,0x00,0x69,0x1c,0x00,0x03,0xff,0xea,0xba,0x10,0x00,0x39,0xc3,0xea,0xaa,0x10,
    0x00,0x1b,0x81,0x20,0x00,0x18,0x00,0x40,0x00,0x4b,0x1e,0x00,0x07,0x00,0x60,0x00,
    0x18,0x00,0x80,0x00,0x4a,0x1f,0x00,0x07,0x00,0xa0,0x00,0x29,0x1f,0x81,0xc0,0x00,
    0x36,0xc0,0x1f,0xc3,0xe0,0x00,0x57,0x7f,0xff,0xff,0xf0,0x7f,0x00,0x01,0x0c,0x20,
    0x01,0x0e,0x10,0x00,0x11,0xf8,0xfa,0x00,0x04,0x30,0x01,0x2a,0x7c,0x03,0x60,0x01,
    0x2c,0x70,0x00,0x10,0x00,0x02,0x42,0x00,0x11,0xfc,0x36,0x00,0x4b,0x00,0x00,0x70,
    0xf0,0x10,0x00,0x21,0xf8,0x7f,0x12,0x00,0x04,0x20,0x00,0x57,0x71,0xf8,0x3f,0xc0,
    0x3f,0x10,0x00,0x57,0x7f,0xf8,0x7f,0xc4,0x1f,0x10,0x00,0x93,0x7e,0x00,0x3f,0xcf,
    0x0f,0xff,0xff,0xad,0xdc,0x50,0x00,0x57,0x78,0x00,0x7f,0xcf,0x0f,0x20,0x00,0x49,
    0x70,0x00,0x3f,0xfd,0x10,0x00,0x65,0xf8,0x7f,0xe0,0x0f,0xf0,0x7f,0x60,0x00,0x75,
    0x60,0xf8,0x3f,0xc1,0x0f,0xf3,0x3f,0x40,0x00,0x76,0x60,0xf8,0x7f,0x87,0x0f,0xfe,
    0x3f,0x20,0x00,0x56,0xf0,0x3f,0x8f,0x0f,0xf0,0x10,0x00,0x48,0x70,0x00,0x1f,0x86,
    0x30,0x00,0x66,0x70,0x00,0x1f,0x80,0x07,0xf2,0x20,0x00,0x75,0x78,0x1c,0x1f,0xc1,
    0x87,0xf0,0x1f,0x50,0x00,0x02,0xde,0x00,0x07,0xc0,0x00,0x02,0x0f,0x01,0x06,0x60,
    0x00,0x56,0x00,0x00,0x00,0x01,0x7f,0x20,0x00,0x7a,0x60,0x00,0x00,0x00,0x00,0x01,
    0x5f,0x20,0x00,0x29,0x56,0xd7,0x10,0x00,0x3a,0x00,0x0a,0xbf,0x10,0x00,0x2a,0xaa,
    0xab,0x10,0x00,0x0b,0x20,0x00,0x3a,0x02,0xaa,0xd6,0x20,0x00,0x1a,0x15,0x60,0x00,
    0x3a,0x00,0xaa,0xb7,0x20,0x00,0x29,0x05,0x6d,0x10,0x00,0x2b,0x01,0x55,0x30,0x00,
    0x29,0x2a,0xbb,0x20,0x00,0x3a,0x00,0x95,0xae,0x10,0x00,0x16,0x56,0xd0,0x00,0x0f,
    0x00,0x01,0x0d,0x0c,0x20,0x00,0x07,0x02,0x00,0x50,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t test_I1_LZ4_align64 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_I1,
  .header.flags = 0 | LV_IMAGE_FLAGS_COMPRESSED,
  .header.w = 71,
  .header.h = 60,
  .header.stride = 16,
  .data_size = sizeof(test_I1_LZ4_align64_map),
  .data = test_I1_LZ4_align64_map,
};


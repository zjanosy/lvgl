
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
uint8_t test_I2_LZ4_align64_map[] = {

    0x02,0x00,0x00,0x00,0x67,0x02,0x00,0x00,0x90,0x07,0x00,0x00,0xfd,0x01,0x5a,0x00,
    0x3d,0xf3,0x5e,0xff,0xf4,0xe3,0x21,0xba,0xba,0x08,0x38,0xff,0x13,0xff,0x01,0x00,
    0x29,0xfc,0x00,0x01,0x00,0x2b,0xea,0xaa,0x01,0x00,0x19,0xac,0x1f,0x00,0x0f,0x20,
    0x00,0x0e,0x53,0xe8,0x00,0x01,0x55,0x56,0x43,0x00,0x5b,0xa8,0x00,0x00,0x00,0x00,
    0x40,0x00,0x02,0x20,0x00,0xbf,0xa8,0x00,0x2a,0xaa,0xaa,0xaa,0xa8,0xaa,0xaa,0xaa,
    0xa8,0x20,0x00,0x02,0xbf,0x80,0x00,0x02,0xaa,0xa8,0x2a,0xa8,0x80,0x00,0x00,0x08,
    0x20,0x00,0x02,0xbf,0x00,0x00,0x00,0xaa,0xa0,0x0a,0xa8,0x8a,0xaa,0xaa,0x88,0x20,
    0x00,0x01,0xbf,0xa8,0x00,0x00,0x00,0x2a,0xa0,0x0a,0xa8,0x88,0x00,0x00,0x20,0x00,
    0x07,0x6f,0xa8,0x2a,0xa8,0x88,0xaa,0xa8,0x20,0x00,0x02,0xbf,0xa0,0x00,0x00,0x00,
    0x0a,0xaa,0xaa,0xa8,0x88,0x80,0x08,0x20,0x00,0x0b,0x2c,0x8a,0x88,0x20,0x00,0x51,
    0xe9,0x55,0x54,0x00,0x02,0x40,0x00,0x5f,0xa0,0x0a,0xa8,0x88,0x88,0x20,0x00,0x08,
    0x2f,0x80,0x02,0x40,0x00,0x0b,0x2f,0x00,0x00,0x80,0x00,0x01,0x06,0x60,0x00,0x2f,
    0x00,0x00,0xc0,0x00,0x01,0x01,0x20,0x00,0x01,0x00,0x01,0x2f,0x00,0x00,0x00,0x01,
    0x01,0x09,0x20,0x00,0x0f,0x40,0x01,0x00,0x01,0x20,0x00,0x7f,0xaa,0x00,0x00,0x00,
    0xaa,0x80,0x02,0x80,0x01,0x01,0x02,0x20,0x00,0x6f,0x80,0x00,0x02,0xaa,0xa0,0x0a,
    0xc0,0x01,0x01,0x02,0x20,0x02,0x03,0xe0,0x01,0x0f,0x00,0x02,0x00,0x02,0x20,0x00,
    0x07,0x02,0x00,0x0b,0xc0,0x01,0x0f,0x20,0x00,0x12,0x17,0x80,0x94,0x02,0x0c,0x40,
    0x00,0x37,0xa0,0x00,0x0a,0x5e,0x00,0x0e,0x60,0x00,0x3f,0x00,0x00,0x00,0x20,0x00,
    0x0d,0x18,0x2a,0x21,0x00,0x0c,0x60,0x00,0x21,0x00,0xaa,0xbc,0x02,0x05,0x02,0x00,
    0x0e,0x20,0x00,0x23,0x80,0x0a,0x00,0x01,0x01,0x02,0x00,0x0c,0x20,0x00,0x81,0x02,
    0xaa,0x80,0x0a,0xaa,0xa0,0x00,0x02,0x1d,0x00,0x0f,0x20,0x00,0x00,0x6f,0xaa,0xaa,
    0x80,0x0a,0xaa,0x80,0x20,0x00,0x07,0x72,0xa8,0x00,0x00,0x0a,0xaa,0xa0,0xaa,0xc5,
    0x00,0x3c,0x88,0xa2,0xa2,0x60,0x00,0x18,0x80,0x20,0x00,0x0f,0x60,0x00,0x00,0x02,
    0xdb,0x02,0x5f,0x80,0x00,0xaa,0xaa,0xa0,0x20,0x00,0x01,0x31,0xe8,0x00,0x2a,0xa0,
    0x00,0x23,0x00,0xaa,0xe8,0x00,0x0b,0x60,0x00,0x11,0xe8,0xe0,0x00,0x7f,0x80,0x00,
    0x00,0xaa,0xaa,0x0a,0x0a,0x80,0x00,0x00,0x03,0x20,0x00,0x51,0x2a,0x00,0xaa,0xaa,
    0xa8,0x89,0x01,0x0d,0x40,0x00,0x92,0x28,0x00,0x0a,0xaa,0x80,0xaa,0x00,0xaa,0xaa,
    0xa9,0x01,0x0b,0x20,0x00,0xbf,0xea,0x00,0x00,0x00,0x02,0xaa,0x80,0x08,0x00,0xaa,
    0xa8,0x60,0x00,0x02,0x21,0xea,0x00,0x9c,0x02,0x5f,0x00,0x00,0x2a,0xaa,0x08,0x60,
    0x00,0x01,0xdf,0xea,0x80,0x00,0x80,0x02,0xaa,0xa0,0x00,0x80,0x2a,0xaa,0x00,0x02,
    0xa0,0x00,0x00,0x0f,0x60,0x02,0x12,0x08,0x02,0x00,0x0b,0xa0,0x00,0x11,0xeb,0x41,
    0x05,0x8e,0xf7,0x55,0x55,0x55,0x55,0x55,0x56,0x66,0x60,0x01,0x02,0x20,0x00,0x11,
    0xdd,0x20,0x00,0x3f,0x65,0x99,0x99,0x40,0x00,0x0c,0x1f,0x6a,0x20,0x00,0x04,0x13,
    0xfd,0x40,0x00,0x2f,0xa6,0x6a,0x80,0x00,0x03,0x02,0x60,0x00,0x2f,0x59,0x9a,0x40,
    0x00,0x05,0x02,0xa0,0x00,0x1f,0x95,0x80,0x00,0x06,0x03,0x40,0x00,0x1f,0x99,0xc0,
    0x00,0x05,0x02,0x40,0x00,0x4f,0x56,0x66,0x99,0x9a,0x80,0x00,0x08,0x2f,0x56,0x65,
    0x40,0x00,0x0c,0x1f,0x59,0x80,0x00,0x0c,0x0f,0x40,0x01,0x07,0x02,0x80,0x00,0x2f,
    0x65,0x99,0x80,0x00,0x0a,0x0f,0xc0,0x00,0x11,0x0d,0x60,0x01,0x0f,0x00,0x02,0x2d,
    0x0f,0x40,0x00,0x0d,0x01,0x1f,0x02,0x08,0x02,0x00,0x06,0x60,0x07,0x50,0x00,0x00,
    0x00,0x00,0x00,

};

const lv_image_dsc_t test_I2_LZ4_align64 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_I2,
  .header.flags = 0 | LV_IMAGE_FLAGS_COMPRESSED,
  .header.w = 71,
  .header.h = 60,
  .header.stride = 32,
  .data_size = sizeof(test_I2_LZ4_align64_map),
  .data = test_I2_LZ4_align64_map,
};


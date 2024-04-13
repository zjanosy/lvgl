
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
uint8_t test_A4_LZ4_align1_map[] = {

    0x02,0x00,0x00,0x00,0x5f,0x03,0x00,0x00,0x40,0x0b,0x00,0x00,0x1f,0xff,0x01,0x00,
    0x0f,0x27,0xf0,0x00,0x01,0x00,0x09,0x0d,0x00,0x0f,0x02,0x00,0x03,0x09,0x23,0x00,
    0x09,0x0d,0x00,0x0f,0x02,0x00,0x03,0x09,0x23,0x00,0x23,0xf0,0x0f,0x91,0x00,0x09,
    0x16,0x00,0x34,0x00,0x00,0x00,0x18,0x00,0x29,0xff,0x00,0x1a,0x00,0x09,0x30,0x00,
    0x41,0x39,0xdf,0xfd,0x93,0x2d,0x00,0x41,0x00,0x00,0x00,0x0f,0x06,0x00,0x3f,0x00,
    0x00,0x0f,0x30,0x00,0x07,0x10,0x19,0xfd,0x00,0x93,0x91,0x00,0x00,0x00,0x6d,0xd6,
    0x00,0x00,0x0f,0x61,0x00,0x0f,0x30,0x00,0x07,0x20,0x01,0xaf,0x2d,0x01,0x92,0xfa,
    0x10,0x00,0x00,0xdf,0xfd,0x00,0x00,0x0f,0x61,0x00,0x1f,0x0f,0x30,0x00,0x07,0x12,
    0x09,0xca,0x00,0x14,0x90,0x30,0x00,0x01,0x61,0x00,0x0f,0x30,0x00,0x08,0x12,0x3f,
    0x30,0x00,0x14,0xf3,0x90,0x00,0x5f,0x0f,0x00,0x00,0x00,0x0f,0x30,0x00,0x08,0x12,
    0x9f,0x30,0x00,0x12,0xf9,0xe9,0x00,0x11,0x0f,0x61,0x00,0x0f,0x30,0x00,0x09,0x12,
    0xdf,0x30,0x00,0x16,0xfd,0x30,0x00,0x2f,0x00,0x0f,0x30,0x00,0x09,0x02,0x2f,0x00,
    0x71,0xff,0xff,0x00,0x04,0xaf,0xfa,0x40,0x2b,0x00,0x01,0x02,0x00,0x0f,0x50,0x01,
    0x06,0x05,0x30,0x00,0x41,0x4d,0xff,0xff,0xd4,0x30,0x00,0x02,0x05,0x00,0x0f,0xb0,
    0x01,0x05,0x05,0x90,0x00,0x41,0xaf,0xff,0xff,0xfa,0x2b,0x00,0x0f,0xc0,0x00,0x0b,
    0x05,0xf0,0x00,0x01,0x95,0x00,0x0f,0x20,0x01,0x0f,0x05,0x50,0x01,0x04,0x30,0x00,
    0x00,0xec,0x02,0x0f,0xc0,0x00,0x08,0x05,0xb0,0x01,0x03,0x90,0x00,0x01,0x28,0x01,
    0x0f,0x30,0x00,0x08,0x05,0x10,0x02,0x03,0xf0,0x00,0x02,0x00,0x01,0x0f,0xf0,0x00,
    0x07,0x05,0x70,0x02,0x02,0x50,0x01,0x01,0x5f,0x00,0x0e,0xa0,0x02,0x03,0x17,0x00,
    0x01,0x02,0x00,0x09,0xd0,0x02,0x02,0x5f,0x00,0x0d,0x00,0x03,0x01,0x29,0x00,0x0f,
    0x02,0x00,0x0a,0x0a,0x80,0x01,0x0f,0x2b,0x00,0x0a,0x01,0x02,0x00,0x0d,0x30,0x00,
    0x21,0x12,0x32,0xa9,0x00,0x04,0x81,0x00,0x0b,0x02,0x00,0x0a,0x53,0x00,0x81,0xf0,
    0x00,0x03,0x9d,0xff,0xff,0xfc,0x50,0x4a,0x00,0x0f,0x02,0x00,0x03,0x0b,0x60,0x00,
    0x6f,0xbf,0xff,0xff,0xff,0xff,0xfb,0x2b,0x00,0x03,0x01,0x02,0x00,0x0b,0x30,0x00,
    0x11,0xef,0x80,0x00,0x11,0xa0,0x1b,0x00,0x0f,0x02,0x00,0x02,0x0c,0x30,0x00,0x6f,
    0xfe,0x40,0x03,0xdf,0xff,0xf2,0x2b,0x00,0x02,0x01,0x02,0x00,0x0c,0x30,0x00,0xd5,
    0xfa,0x00,0x00,0x4f,0xff,0xf6,0x00,0x00,0x00,0x00,0x17,0xbd,0xed,0x50,0x04,0x06,
    0x02,0x00,0x0b,0x30,0x00,0xb0,0xbd,0xd6,0x00,0x00,0x0f,0xff,0xf8,0x00,0x00,0x00,
    0x05,0x4d,0x05,0x16,0x70,0x29,0x00,0x03,0x02,0x00,0x0b,0x30,0x00,0xf3,0x01,0x00,
    0x00,0x00,0x01,0x1f,0xff,0xf9,0x00,0x00,0x00,0x06,0xff,0xe8,0x8d,0xff,0xf3,0x26,
    0x00,0x06,0x02,0x00,0x01,0x23,0x00,0x04,0x02,0x00,0x53,0xf0,0x00,0x00,0x5a,0xef,
    0xe6,0x03,0x41,0x06,0xff,0x40,0x01,0x69,0x00,0x03,0x02,0x00,0x01,0x9c,0x02,0x1c,
    0xf0,0x80,0x01,0x11,0x1c,0x20,0x01,0xa3,0xf9,0x00,0x00,0x00,0x04,0xaa,0x10,0x00,
    0xcf,0xfa,0x2d,0x00,0x06,0x02,0x00,0x0b,0x60,0x00,0x51,0xdf,0xff,0xfe,0xcb,0xbf,
    0x90,0x00,0x51,0x00,0x01,0x57,0x89,0xef,0x30,0x00,0x3f,0x15,0x76,0x10,0x30,0x00,
    0x05,0x62,0x07,0xff,0xff,0x70,0x00,0x0f,0x30,0x00,0xcf,0x8f,0xff,0xff,0xff,0xfa,
    0x00,0x00,0x00,0x01,0xff,0xef,0xf4,0x30,0x00,0x05,0x43,0x0b,0xff,0xfd,0x00,0x30,
    0x00,0x41,0x08,0xff,0xfb,0x88,0x60,0x00,0x41,0x01,0xf7,0x05,0xfb,0xdd,0x04,0x0f,
    0xc0,0x00,0x00,0x61,0x0d,0xff,0xfc,0x00,0x00,0x2f,0x60,0x00,0x33,0x0f,0xff,0x80,
    0xc0,0x00,0x3f,0x24,0x68,0xfc,0x60,0x00,0x07,0x41,0xff,0x71,0x16,0xef,0x30,0x00,
    0x51,0x1f,0xff,0x50,0x00,0xdf,0x90,0x00,0x23,0xcf,0xdd,0xe6,0x04,0x0e,0xf0,0x00,
    0x11,0x06,0x1f,0x01,0xff,0x03,0xff,0xff,0xd4,0x00,0x00,0x0f,0xff,0xd5,0x5c,0xff,
    0xfc,0x10,0x00,0x00,0x06,0xfa,0x03,0xfd,0x90,0x00,0x05,0xf2,0x0a,0x00,0xcf,0xff,
    0xff,0xff,0xbc,0xff,0xff,0xf6,0x00,0x00,0x09,0xff,0xff,0xff,0xef,0xff,0xf0,0x00,
    0x00,0x06,0xfd,0x6b,0xfd,0x20,0x5d,0x00,0x0d,0x60,0x00,0x61,0x00,0x09,0xff,0xff,
    0xf8,0x07,0x30,0x00,0xef,0x00,0x9f,0xff,0xe5,0x6f,0xff,0xf0,0x00,0x00,0x00,0xbf,
    0xf8,0xff,0x90,0xb0,0x01,0x05,0x31,0x00,0x03,0x43,0x47,0x00,0x52,0x00,0x00,0x00,
    0x00,0x33,0x07,0x00,0x23,0x00,0x01,0x08,0x00,0x01,0x02,0x00,0x0b,0xb0,0x01,0x01,
    0x14,0x00,0x0f,0x02,0x00,0x09,0x09,0x23,0x00,0x05,0x20,0x07,0x06,0x02,0x00,0xdd,
    0xee,0xdd,0xcb,0xba,0xa9,0x98,0x87,0x76,0x65,0x44,0x33,0x22,0x11,0xc0,0x00,0x01,
    0xa6,0x06,0x09,0x02,0x00,0x05,0x30,0x00,0x1f,0x54,0x30,0x00,0x1c,0x0f,0x60,0x00,
    0x7d,0x0f,0x90,0x00,0x1d,0x0f,0x30,0x00,0x75,0x1f,0xdc,0xb0,0x01,0x24,0x0f,0xc0,
    0x00,0x1d,0x0f,0xe0,0x01,0x62,0x0f,0xca,0x02,0x09,0x02,0x02,0x00,0x0a,0xd0,0x02,
    0x02,0x14,0x00,0x0f,0x02,0x00,0x09,0x0f,0x30,0x00,0x2a,0x09,0xfa,0x02,0x0f,0x02,
    0x00,0x03,0x04,0x60,0x00,0x50,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t test_A4_LZ4_align1 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_A4,
  .header.flags = 0 | LV_IMAGE_FLAGS_COMPRESSED,
  .header.w = 71,
  .header.h = 60,
  .header.stride = 48,
  .data_size = sizeof(test_A4_LZ4_align1_map),
  .data = test_A4_LZ4_align1_map,
};


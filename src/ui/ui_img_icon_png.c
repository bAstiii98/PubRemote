// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: PubRemote

#include "ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets\icon.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_icon_png_data[] = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x4A,0x49,0x3C,0xC6,0x18,0xB1,0xF7,0x9E,0xF2,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xF7,0xBE,0xF3,0xCE,0x79,0xBD,0x5A,0xCB,0x4B,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7B,0xCF,0x69,0xFF,0xDF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x8C,0x71,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xC3,0x15,0xEF,0x5D,0xE2,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0x9E,0xEC,0x21,0x04,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x08,0x30,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x63,0x0C,0x4F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x39,0xC7,0x29,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5A,0xCB,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xE3,0x09,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x18,0xC3,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6,0x9A,0xC8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xF6,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xDF,0xF6,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xDF,0xF6,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xDF,0xF6,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0x1C,0xDD,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x39,0xE7,0x32,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xBE,0xF3,0x18,0xC3,0x13,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,
    0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x08,0x61,0x11,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5A,0xCB,0x4B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE,0xFB,0xD3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5A,0xCB,0x4E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x61,0x11,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0x9E,0xE9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xA2,0x0C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x42,0x08,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x10,0x82,0x10,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x18,0xC3,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x6B,0x6D,0x62,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x42,0x08,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAD,0x55,0xAB,0xBD,0xD7,0xBC,0xBD,0xD7,0xBB,0xBD,0xD7,0xBB,0xBD,0xD7,0xBC,0xBD,0xD7,0xBB,0xBD,0xD7,0xBB,0xBD,0xD7,0xBC,0xBD,0xD7,0xBB,0xC6,0x18,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7B,0xEF,0x79,0x00,0x00,0x00,0x00,0x00,0x00,0xB5,0xB6,0x9D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x42,0x08,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEF,0x5D,0xEA,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD6,0x9A,0xC5,0x00,0x00,0x00,0x00,0x00,0x00,0xEF,0x7D,0xE6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3A,0x08,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEF,0x5D,0xEA,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0x9E,0xEF,0x00,0x00,0x00,0x00,0x00,0x00,0xF7,0x9E,0xF0,0xFF,0xFF,0xFF,0xEF,0xDF,0xFD,0xA6,0xDE,0xF9,0x66,0x1D,0xFD,0x2D,0x7C,0xFD,0x2D,0x5C,0xFF,0x09,0x47,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x82,0x0E,0x4A,0x49,0x43,0x7B,0xCF,0x66,0xD6,0x9A,0xCB,0xF7,0x9E,0xEE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xF7,0x9E,0xF2,0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0xFD,0xEC,0x45,0xBC,0xFD,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x47,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x29,0x45,0x2A,0x29,0x65,0x29,0x52,0x8A,0x51,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0x9E,0xF1,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xB8,0xD3,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x66,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE4,0x2C,0x35,0x7C,0xFE,0x6E,0x3D,0xFA,0xAE,0xFE,0xFA,0xEF,0xDF,0xFD,0xF7,0xDF,0xFF,0xF7,0xDF,0xFF,0xF7,0xDF,0xFF,0xDF,0x5D,0xE9,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0xEF,0x85,
    0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x47,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE5,0x2D,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x1B,0x92,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x67,0x32,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x47,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x88,0x48,0x09,0xA8,0x4E,0x09,0xC9,0x4E,0x09,0xC9,0x4E,0x09,0xA8,0x4E,0x09,0xC9,0x4E,0x09,0xC9,0x4E,0x09,0xA8,0x4E,0x12,0x4C,0x6E,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x12,0x0A,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x2D,0x5C,0xFE,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,
    0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x66,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xFA,0xEA,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFE,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0xB3,0xA4,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x47,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xF9,0xEA,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x1C,0x15,0xB5,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x0E,0x2D,0x5C,0xFE,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x47,0x2F,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xF9,0xEA,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x00,0xA2,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0xEF,0x80,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x66,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xFA,0xEA,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x1B,0x31,0x8E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xB8,0xD5,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x47,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xF9,0xEA,0x2D,0x5C,0xFF,
    0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x24,0xD9,0xDD,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x25,0x1A,0xE7,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x09,0x47,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xF9,0xEA,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x24,0xFA,0xEA,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x24,0x98,0xD3,0x2D,0x5C,0xFF,0x09,0x66,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xFA,0xEA,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,
    0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x24,0xB9,0xD9,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0xCF,0x7B,0x09,0x66,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xD9,0xDE,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFE,0x12,0xEF,0x82,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0x2B,0x56,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFF,0x2D,0x5C,0xFD,0x1B,0x92,0xA0,0x00,0x82,0x0E,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0xCA,0x4B,0x24,0xD9,0xD4,0x24,0xFA,0xE0,0x24,0x15,0xB4,0x12,0xCE,0x7F,0x00,0xE5,0x25,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const lv_img_dsc_t ui_img_icon_png = {
    .header.always_zero = 0,
    .header.w = 30,
    .header.h = 30,
    .data_size = sizeof(ui_img_icon_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_icon_png_data
};

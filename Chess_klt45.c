#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CHESS_KLT45
#define LV_ATTRIBUTE_IMG_CHESS_KLT45
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CHESS_KLT45 uint8_t Chess_klt45_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x49, 0x49, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x24, 0x24, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x25, 0x25, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0x25, 0x25, 0x24, 0x25, 0x24, 0x24, 0x24, 0x24, 0x25, 0x25, 0x25, 0x25, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x49, 0x24, 0x24, 0x25, 0x24, 0x24, 0x00, 0x24, 0x24, 0x00, 0x24, 0x24, 0x25, 0x24, 0x24, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0x24, 0x49, 0x00, 0x00, 0x25, 0x24, 0x24, 0x24, 0x24, 0x25, 0x00, 0x00, 0x49, 0x24, 0x24, 0x00, 0x00, 
  0x00, 0x92, 0x25, 0x25, 0x00, 0x00, 0x00, 0x00, 0x25, 0x24, 0x24, 0x25, 0x00, 0x00, 0x00, 0x00, 0x25, 0x24, 0x92, 0x00, 
  0x00, 0xff, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0xff, 0x00, 
  0x00, 0x00, 0x25, 0x24, 0x25, 0x00, 0x00, 0x25, 0x49, 0x25, 0x25, 0x49, 0x25, 0x00, 0x00, 0x25, 0x24, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x25, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x25, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x6d, 0x24, 0x24, 0x24, 0x25, 0x24, 0x24, 0x25, 0x24, 0x24, 0x24, 0x6d, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x49, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x49, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x6d, 0x24, 0x24, 0x24, 0x25, 0x49, 0x49, 0x25, 0x24, 0x24, 0x24, 0x6d, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x49, 0x49, 0x49, 0x49, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x86, 0x31, 0x86, 0x31, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0xe3, 0x18, 0xe3, 0x18, 0xc7, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x24, 0x21, 0x25, 0x29, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x21, 0xc3, 0x18, 0xc3, 0x18, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x42, 0x04, 0x21, 0x45, 0x29, 0x04, 0x21, 0x24, 0x21, 0x82, 0x10, 0xe3, 0x18, 0xe3, 0x18, 0x82, 0x10, 0x24, 0x21, 0x04, 0x21, 0x45, 0x29, 0x04, 0x21, 0x08, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0xa3, 0x18, 0xc3, 0x18, 0x25, 0x29, 0xe3, 0x18, 0xa3, 0x18, 0x61, 0x08, 0xc3, 0x18, 0xc3, 0x18, 0x41, 0x08, 0xa3, 0x18, 0xe3, 0x18, 0x25, 0x29, 0xc3, 0x18, 0xc3, 0x18, 0xa6, 0x31, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xc3, 0x18, 0xc3, 0x18, 0x08, 0x42, 0x00, 0x00, 0x00, 0x00, 0x04, 0x21, 0x82, 0x10, 0xc3, 0x18, 0xc3, 0x18, 0x82, 0x10, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x08, 0x42, 0xa3, 0x18, 0xe3, 0x18, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x10, 0x84, 0x04, 0x21, 0x45, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x29, 0xa2, 0x10, 0xa3, 0x18, 0x65, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x29, 0x04, 0x21, 0x10, 0x84, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xe4, 0x20, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0x18, 0xe3, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0x18, 0xe3, 0x18, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x21, 0xc3, 0x18, 0x45, 0x29, 0x00, 0x00, 0x00, 0x00, 0x25, 0x29, 0xc7, 0x39, 0x04, 0x21, 0x04, 0x21, 0xc7, 0x39, 0x25, 0x29, 0x00, 0x00, 0x00, 0x00, 0x65, 0x29, 0xc3, 0x18, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xa2, 0x10, 0xe3, 0x18, 0x82, 0x10, 0x82, 0x10, 0xc3, 0x18, 0xa2, 0x10, 0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xe3, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x21, 0xa3, 0x18, 0xe4, 0x20, 0xe4, 0x20, 0x04, 0x21, 0x82, 0x10, 0x82, 0x10, 0x04, 0x21, 0xe4, 0x20, 0xe4, 0x20, 0xa3, 0x18, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xec, 0x62, 0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0x04, 0x21, 0x82, 0x10, 0x82, 0x10, 0x04, 0x21, 0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xec, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x4a, 0xe4, 0x20, 0x04, 0x21, 0xa3, 0x18, 0xe3, 0x18, 0x62, 0x10, 0x62, 0x10, 0xe3, 0x18, 0xa3, 0x18, 0x04, 0x21, 0xe4, 0x20, 0x49, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xa3, 0x18, 0xa2, 0x10, 0x04, 0x21, 0x66, 0x31, 0x86, 0x31, 0xa6, 0x31, 0x66, 0x31, 0x04, 0x21, 0xa2, 0x10, 0xa3, 0x18, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x21, 0xe3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0x04, 0x21, 0x04, 0x21, 0xc3, 0x18, 0xc3, 0x18, 0xe3, 0x18, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa6, 0x31, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x31, 0x86, 0x31, 0x86, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0x18, 0xe3, 0x18, 0xe3, 0x39, 0xc7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x21, 0x24, 0x29, 0x25, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x04, 0x18, 0xc3, 0x18, 0xc3, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x08, 0x21, 0x04, 0x29, 0x45, 0x21, 0x04, 0x21, 0x24, 0x10, 0x82, 0x18, 0xe3, 0x18, 0xe3, 0x10, 0x82, 0x21, 0x24, 0x21, 0x04, 0x29, 0x45, 0x21, 0x04, 0x42, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x31, 0xa6, 0x18, 0xa3, 0x18, 0xc3, 0x29, 0x25, 0x18, 0xe3, 0x18, 0xa3, 0x08, 0x61, 0x18, 0xc3, 0x18, 0xc3, 0x08, 0x41, 0x18, 0xa3, 0x18, 0xe3, 0x29, 0x25, 0x18, 0xc3, 0x18, 0xc3, 0x31, 0xa6, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x18, 0xc3, 0x18, 0xc3, 0x42, 0x08, 0x00, 0x00, 0x00, 0x00, 0x21, 0x04, 0x10, 0x82, 0x18, 0xc3, 0x18, 0xc3, 0x10, 0x82, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 0x42, 0x08, 0x18, 0xa3, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x84, 0x10, 0x21, 0x04, 0x29, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x65, 0x10, 0xa2, 0x18, 0xa3, 0x29, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x45, 0x21, 0x04, 0x84, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0x20, 0xe4, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xe3, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xe3, 0x18, 0xe3, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x21, 0x04, 0x18, 0xc3, 0x29, 0x45, 0x00, 0x00, 0x00, 0x00, 0x29, 0x25, 0x39, 0xc7, 0x21, 0x04, 0x21, 0x04, 0x39, 0xc7, 0x29, 0x25, 0x00, 0x00, 0x00, 0x00, 0x29, 0x65, 0x18, 0xc3, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xe3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x10, 0xa2, 0x18, 0xe3, 0x10, 0x82, 0x10, 0x82, 0x18, 0xc3, 0x10, 0xa2, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x04, 0x18, 0xa3, 0x20, 0xe4, 0x20, 0xe4, 0x21, 0x04, 0x10, 0x82, 0x10, 0x82, 0x21, 0x04, 0x20, 0xe4, 0x20, 0xe4, 0x18, 0xa3, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0xec, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x21, 0x04, 0x10, 0x82, 0x10, 0x82, 0x21, 0x04, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xc3, 0x62, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 0x49, 0x20, 0xe4, 0x21, 0x04, 0x18, 0xa3, 0x18, 0xe3, 0x10, 0x62, 0x10, 0x62, 0x18, 0xe3, 0x18, 0xa3, 0x21, 0x04, 0x20, 0xe4, 0x4a, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0xab, 0x18, 0xa3, 0x10, 0xa2, 0x21, 0x04, 0x31, 0x66, 0x31, 0x86, 0x31, 0xa6, 0x31, 0x66, 0x21, 0x04, 0x10, 0xa2, 0x18, 0xa3, 0x5a, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x04, 0x18, 0xe3, 0x18, 0xc3, 0x18, 0xc3, 0x21, 0x04, 0x21, 0x04, 0x18, 0xc3, 0x18, 0xc3, 0x18, 0xe3, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0xab, 0x31, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa6, 0x5a, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x30, 0x30, 0x30, 0xff, 0x30, 0x30, 0x30, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x37, 0x37, 0x37, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x22, 0x22, 0x22, 0xff, 0x25, 0x25, 0x25, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x17, 0x17, 0x17, 0xff, 0x17, 0x17, 0x17, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x40, 0x40, 0x40, 0xff, 0x20, 0x20, 0x20, 0xff, 0x28, 0x28, 0x28, 0xff, 0x1f, 0x1f, 0x1f, 0xff, 0x23, 0x23, 0x23, 0xff, 0x11, 0x11, 0x11, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x11, 0x11, 0x11, 0xff, 0x23, 0x23, 0x23, 0xff, 0x20, 0x20, 0x20, 0xff, 0x28, 0x28, 0x28, 0xff, 0x20, 0x20, 0x20, 0xff, 0x40, 0x40, 0x40, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x33, 0x33, 0x33, 0xff, 0x15, 0x15, 0x15, 0xff, 0x16, 0x16, 0x16, 0xff, 0x24, 0x24, 0x24, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x15, 0x15, 0x15, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x17, 0x17, 0x17, 0xff, 0x17, 0x17, 0x17, 0xff, 0x09, 0x09, 0x09, 0xff, 0x15, 0x15, 0x15, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x24, 0x24, 0x24, 0xff, 0x16, 0x16, 0x16, 0xff, 0x17, 0x17, 0x17, 0xff, 0x33, 0x33, 0x33, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x19, 0x19, 0x19, 0xff, 0x16, 0x16, 0x16, 0xff, 0x40, 0x40, 0x40, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x20, 0x20, 0x20, 0xff, 0x11, 0x11, 0x11, 0xff, 0x18, 0x18, 0x18, 0xff, 0x16, 0x16, 0x16, 0xff, 0x11, 0x11, 0x11, 0xff, 0x20, 0x20, 0x20, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x40, 0x40, 0x40, 0xff, 0x14, 0x14, 0x14, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x21, 0x21, 0x21, 0xff, 0x28, 0x28, 0x28, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x2b, 0x2b, 0x2b, 0xff, 0x13, 0x13, 0x13, 0xff, 0x15, 0x15, 0x15, 0xff, 0x2b, 0x2b, 0x2b, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x28, 0x28, 0x28, 0xff, 0x1f, 0x1f, 0x1f, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1c, 0x1c, 0x1c, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x1b, 0x1b, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x20, 0x20, 0x20, 0xff, 0x17, 0x17, 0x17, 0xff, 0x29, 0x29, 0x29, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x24, 0x24, 0x24, 0xff, 0x39, 0x39, 0x39, 0xff, 0x21, 0x21, 0x21, 0xff, 0x21, 0x21, 0x21, 0xff, 0x39, 0x39, 0x39, 0xff, 0x24, 0x24, 0x24, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x2b, 0x2b, 0x2b, 0xff, 0x16, 0x16, 0x16, 0xff, 0x1c, 0x1c, 0x1c, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x16, 0x16, 0x16, 0xff, 0x16, 0x16, 0x16, 0xff, 0x19, 0x19, 0x19, 0xff, 0x13, 0x13, 0x13, 0xff, 0x1b, 0x1b, 0x1b, 0xff, 0x0f, 0x0f, 0x0f, 0xff, 0x0f, 0x0f, 0x0f, 0xff, 0x19, 0x19, 0x19, 0xff, 0x13, 0x13, 0x13, 0xff, 0x19, 0x19, 0x19, 0xff, 0x16, 0x16, 0x16, 0xff, 0x16, 0x16, 0x16, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x20, 0x20, 0x20, 0xff, 0x15, 0x15, 0x15, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1c, 0x1c, 0x1c, 0xff, 0x1f, 0x1f, 0x1f, 0xff, 0x0e, 0x0e, 0x0e, 0xff, 0x0f, 0x0f, 0x0f, 0xff, 0x1f, 0x1f, 0x1f, 0xff, 0x1c, 0x1c, 0x1c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x15, 0x15, 0x15, 0xff, 0x20, 0x20, 0x20, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x5d, 0x5d, 0x5d, 0xff, 0x19, 0x19, 0x19, 0xff, 0x17, 0x17, 0x17, 0xff, 0x18, 0x18, 0x18, 0xff, 0x21, 0x21, 0x21, 0xff, 0x11, 0x11, 0x11, 0xff, 0x11, 0x11, 0x11, 0xff, 0x21, 0x21, 0x21, 0xff, 0x16, 0x16, 0x16, 0xff, 0x17, 0x17, 0x17, 0xff, 0x19, 0x19, 0x19, 0xff, 0x5d, 0x5d, 0x5d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x46, 0x46, 0x46, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1f, 0x1f, 0x1f, 0xff, 0x15, 0x15, 0x15, 0xff, 0x1b, 0x1b, 0x1b, 0xff, 0x0d, 0x0d, 0x0d, 0xff, 0x0d, 0x0d, 0x0d, 0xff, 0x1b, 0x1b, 0x1b, 0xff, 0x15, 0x15, 0x15, 0xff, 0x1f, 0x1f, 0x1f, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x46, 0x46, 0x46, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x55, 0x55, 0x55, 0xff, 0x14, 0x14, 0x14, 0xff, 0x12, 0x12, 0x12, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x2d, 0x2d, 0x2d, 0xff, 0x31, 0x31, 0x31, 0xff, 0x33, 0x33, 0x33, 0xff, 0x2d, 0x2d, 0x2d, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x12, 0x12, 0x12, 0xff, 0x14, 0x14, 0x14, 0xff, 0x55, 0x55, 0x55, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x20, 0x20, 0x20, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x16, 0x16, 0x16, 0xff, 0x18, 0x18, 0x18, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x16, 0x16, 0x16, 0xff, 0x16, 0x16, 0x16, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x30, 0x30, 0x30, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x55, 0x55, 0x55, 0xff, 0x33, 0x33, 0x33, 0xff, 0x31, 0x31, 0x31, 0xff, 0x31, 0x31, 0x31, 0xff, 0x33, 0x33, 0x33, 0xff, 0x55, 0x55, 0x55, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};

const lv_img_dsc_t Chess_klt45 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_COLOR_SIZE / 8,
  .data = Chess_klt45_map,
};

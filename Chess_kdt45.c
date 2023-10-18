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

#ifndef LV_ATTRIBUTE_IMG_CHESS_KDT45
#define LV_ATTRIBUTE_IMG_CHESS_KDT45
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CHESS_KDT45 uint8_t Chess_kdt45_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x49, 0x49, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x24, 0x24, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x25, 0x25, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0x25, 0x49, 0x25, 0x49, 0x00, 0x00, 0x00, 0x00, 0x49, 0x25, 0x49, 0x25, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x49, 0x49, 0x25, 0x25, 0x25, 0x25, 0x00, 0x00, 0x00, 0x00, 0x25, 0x25, 0x25, 0x25, 0x49, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x49, 0x25, 0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00, 0x25, 0x49, 0x00, 0x00, 
  0x00, 0x6d, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x6d, 0x00, 
  0x00, 0x6d, 0x49, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x49, 0x6d, 0x00, 
  0x00, 0x00, 0x49, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x92, 0x49, 0x49, 0x24, 0x24, 0x24, 0x25, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x49, 0x49, 0x92, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x92, 0x49, 0x25, 0x24, 0x24, 0x24, 0x00, 0x00, 0x24, 0x24, 0x24, 0x25, 0x49, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x92, 0x25, 0x24, 0x24, 0x24, 0x00, 0x00, 0x24, 0x24, 0x24, 0x25, 0x92, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x92, 0x25, 0x24, 0x24, 0x24, 0x00, 0x00, 0x24, 0x24, 0x24, 0x25, 0x92, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xb7, 0x49, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x49, 0xb7, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x6d, 0x49, 0x49, 0x49, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x86, 0x31, 0x86, 0x31, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0xe3, 0x18, 0xe3, 0x18, 0xc7, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x24, 0x21, 0x24, 0x21, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x41, 0x08, 0x41, 0x08, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0x66, 0x31, 0xc7, 0x39, 0x45, 0x29, 0xa6, 0x31, 0x61, 0x08, 0x00, 0x00, 0x00, 0x00, 0x61, 0x08, 0xa6, 0x31, 0x45, 0x29, 0xc7, 0x39, 0x66, 0x31, 0xa6, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0xa7, 0x39, 0x65, 0x29, 0x86, 0x31, 0x24, 0x21, 0x04, 0x21, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0x04, 0x21, 0x24, 0x21, 0x86, 0x31, 0x65, 0x29, 0xa7, 0x39, 0x6a, 0x52, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x29, 0x4a, 0x04, 0x21, 0x41, 0x08, 0x21, 0x08, 0x41, 0x08, 0xa3, 0x18, 0xa3, 0x18, 0x20, 0x00, 0x20, 0x00, 0xc3, 0x18, 0xa3, 0x18, 0x41, 0x08, 0x21, 0x08, 0x41, 0x08, 0x04, 0x21, 0x29, 0x4a, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xab, 0x5a, 0xcb, 0x5a, 0x62, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x10, 0xc3, 0x18, 0xc3, 0x18, 0x62, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x10, 0xcb, 0x5a, 0xab, 0x5a, 0x00, 0x00, 
  0x00, 0x00, 0xab, 0x5a, 0x69, 0x4a, 0x82, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x18, 0xc3, 0x18, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x10, 0x69, 0x4a, 0xab, 0x5a, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x28, 0x42, 0xa6, 0x31, 0x61, 0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x21, 0x08, 0xc3, 0x18, 0xc3, 0x18, 0x21, 0x08, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x08, 0xa6, 0x31, 0x08, 0x42, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0xe8, 0x41, 0xc7, 0x39, 0xa2, 0x10, 0x82, 0x10, 0xc3, 0x18, 0x04, 0x21, 0xa3, 0x18, 0xa3, 0x18, 0x04, 0x21, 0xc3, 0x18, 0x82, 0x10, 0xa2, 0x10, 0xc7, 0x39, 0xe8, 0x41, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x49, 0x4a, 0x86, 0x31, 0xa2, 0x10, 0x82, 0x10, 0xc3, 0x18, 0x61, 0x08, 0x61, 0x08, 0xc3, 0x18, 0x82, 0x10, 0xa2, 0x10, 0x86, 0x31, 0x8a, 0x52, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x86, 0x31, 0xe3, 0x18, 0xa3, 0x18, 0xc3, 0x18, 0x61, 0x08, 0x61, 0x08, 0xc3, 0x18, 0xa3, 0x18, 0xe3, 0x18, 0x86, 0x31, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x45, 0x29, 0xa3, 0x18, 0xc3, 0x18, 0x04, 0x21, 0x82, 0x10, 0x82, 0x10, 0x04, 0x21, 0xc3, 0x18, 0xa3, 0x18, 0x45, 0x29, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0xad, 0x29, 0x4a, 0xa3, 0x18, 0x41, 0x08, 0x21, 0x08, 0x20, 0x00, 0x20, 0x00, 0x21, 0x08, 0x41, 0x08, 0xa3, 0x18, 0x29, 0x4a, 0x75, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x42, 0xa3, 0x18, 0x62, 0x10, 0x41, 0x08, 0x61, 0x08, 0x61, 0x08, 0x41, 0x08, 0x62, 0x10, 0xa3, 0x18, 0x08, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0xab, 0x5a, 0xe7, 0x39, 0xe7, 0x39, 0x08, 0x42, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x31, 0x86, 0x31, 0x86, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0x18, 0xe3, 0x18, 0xe3, 0x39, 0xc7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x21, 0x24, 0x21, 0x24, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x08, 0x41, 0x08, 0x41, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xa6, 0x31, 0x66, 0x39, 0xc7, 0x29, 0x45, 0x31, 0xa6, 0x08, 0x61, 0x00, 0x00, 0x00, 0x00, 0x08, 0x61, 0x31, 0xa6, 0x29, 0x45, 0x39, 0xc7, 0x31, 0x66, 0x31, 0xa6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x31, 0xa6, 0x39, 0xa7, 0x29, 0x65, 0x31, 0x86, 0x21, 0x24, 0x21, 0x04, 0x08, 0x41, 0x00, 0x00, 0x00, 0x00, 0x08, 0x41, 0x21, 0x04, 0x21, 0x24, 0x31, 0x86, 0x29, 0x65, 0x39, 0xa7, 0x52, 0x6a, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x4a, 0x29, 0x21, 0x04, 0x08, 0x41, 0x08, 0x21, 0x08, 0x41, 0x18, 0xa3, 0x18, 0xa3, 0x00, 0x20, 0x00, 0x20, 0x18, 0xc3, 0x18, 0xa3, 0x08, 0x41, 0x08, 0x21, 0x08, 0x41, 0x21, 0x04, 0x4a, 0x29, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x5a, 0xab, 0x5a, 0xcb, 0x10, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x62, 0x18, 0xc3, 0x18, 0xc3, 0x10, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x62, 0x5a, 0xcb, 0x5a, 0xab, 0x00, 0x00, 
  0x00, 0x00, 0x5a, 0xab, 0x4a, 0x69, 0x10, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xc3, 0x18, 0xc3, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x82, 0x4a, 0x69, 0x5a, 0xab, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x42, 0x28, 0x31, 0xa6, 0x08, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x08, 0x21, 0x18, 0xc3, 0x18, 0xc3, 0x08, 0x21, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x08, 0x61, 0x31, 0xa6, 0x42, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x41, 0xe8, 0x39, 0xc7, 0x10, 0xa2, 0x10, 0x82, 0x18, 0xc3, 0x21, 0x04, 0x18, 0xa3, 0x18, 0xa3, 0x21, 0x04, 0x18, 0xc3, 0x10, 0x82, 0x10, 0xa2, 0x39, 0xc7, 0x41, 0xe8, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x4a, 0x49, 0x31, 0x86, 0x10, 0xa2, 0x10, 0x82, 0x18, 0xc3, 0x08, 0x61, 0x08, 0x61, 0x18, 0xc3, 0x10, 0x82, 0x10, 0xa2, 0x31, 0x86, 0x52, 0x8a, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x31, 0x86, 0x18, 0xe3, 0x18, 0xa3, 0x18, 0xc3, 0x08, 0x61, 0x08, 0x61, 0x18, 0xc3, 0x18, 0xa3, 0x18, 0xe3, 0x31, 0x86, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x29, 0x45, 0x18, 0xa3, 0x18, 0xc3, 0x21, 0x04, 0x10, 0x82, 0x10, 0x82, 0x21, 0x04, 0x18, 0xc3, 0x18, 0xa3, 0x29, 0x45, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xad, 0x75, 0x4a, 0x29, 0x18, 0xa3, 0x08, 0x41, 0x08, 0x21, 0x00, 0x20, 0x00, 0x20, 0x08, 0x21, 0x08, 0x41, 0x18, 0xa3, 0x4a, 0x29, 0xad, 0x75, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x08, 0x18, 0xa3, 0x10, 0x62, 0x08, 0x41, 0x08, 0x61, 0x08, 0x61, 0x08, 0x41, 0x10, 0x62, 0x18, 0xa3, 0x42, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0x5a, 0xab, 0x39, 0xe7, 0x39, 0xe7, 0x42, 0x08, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x30, 0x30, 0x30, 0xff, 0x30, 0x30, 0x30, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x37, 0x37, 0x37, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x23, 0x23, 0x23, 0xff, 0x23, 0x23, 0x23, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x07, 0x07, 0x07, 0xff, 0x07, 0x07, 0x07, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x33, 0x33, 0x33, 0xff, 0x2c, 0x2c, 0x2c, 0xff, 0x38, 0x38, 0x38, 0xff, 0x27, 0x27, 0x27, 0xff, 0x33, 0x33, 0x33, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x33, 0x33, 0x33, 0xff, 0x27, 0x27, 0x27, 0xff, 0x38, 0x38, 0x38, 0xff, 0x2c, 0x2c, 0x2c, 0xff, 0x33, 0x33, 0x33, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x33, 0x33, 0x33, 0xff, 0x35, 0x35, 0x35, 0xff, 0x2b, 0x2b, 0x2b, 0xff, 0x2f, 0x2f, 0x2f, 0xff, 0x23, 0x23, 0x23, 0xff, 0x21, 0x21, 0x21, 0xff, 0x06, 0x06, 0x06, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x06, 0x06, 0x06, 0xff, 0x21, 0x21, 0x21, 0xff, 0x23, 0x23, 0x23, 0xff, 0x2f, 0x2f, 0x2f, 0xff, 0x2b, 0x2b, 0x2b, 0xff, 0x35, 0x35, 0x35, 0xff, 0x4d, 0x4d, 0x4d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x45, 0x45, 0x45, 0xff, 0x21, 0x21, 0x21, 0xff, 0x08, 0x08, 0x08, 0xff, 0x04, 0x04, 0x04, 0xff, 0x07, 0x07, 0x07, 0xff, 0x15, 0x15, 0x15, 0xff, 0x14, 0x14, 0x14, 0xff, 0x03, 0x03, 0x03, 0xff, 0x03, 0x03, 0x03, 0xff, 0x16, 0x16, 0x16, 0xff, 0x15, 0x15, 0x15, 0xff, 0x07, 0x07, 0x07, 0xff, 0x04, 0x04, 0x04, 0xff, 0x08, 0x08, 0x08, 0xff, 0x21, 0x21, 0x21, 0xff, 0x44, 0x44, 0x44, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x55, 0x55, 0x55, 0xff, 0x58, 0x58, 0x58, 0xff, 0x0d, 0x0d, 0x0d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x01, 0x01, 0x01, 0xff, 0x0d, 0x0d, 0x0d, 0xff, 0x17, 0x17, 0x17, 0xff, 0x17, 0x17, 0x17, 0xff, 0x0d, 0x0d, 0x0d, 0xff, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0d, 0x0d, 0x0d, 0xff, 0x58, 0x58, 0x58, 0xff, 0x55, 0x55, 0x55, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x55, 0x55, 0x55, 0xff, 0x4a, 0x4a, 0x4a, 0xff, 0x11, 0x11, 0x11, 0xff, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x01, 0x01, 0x01, 0xff, 0x19, 0x19, 0x19, 0xff, 0x19, 0x19, 0x19, 0xff, 0x02, 0x02, 0x02, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x01, 0x01, 0x01, 0xff, 0x11, 0x11, 0x11, 0xff, 0x4a, 0x4a, 0x4a, 0xff, 0x55, 0x55, 0x55, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x42, 0x42, 0x42, 0xff, 0x32, 0x32, 0x32, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0x02, 0x02, 0x02, 0xff, 0x04, 0x04, 0x04, 0xff, 0x19, 0x19, 0x19, 0xff, 0x17, 0x17, 0x17, 0xff, 0x04, 0x04, 0x04, 0xff, 0x02, 0x02, 0x02, 0xff, 0x00, 0x00, 0x00, 0xff, 0x01, 0x01, 0x01, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x32, 0x32, 0x32, 0xff, 0x40, 0x40, 0x40, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x3d, 0x3d, 0x3d, 0xff, 0x36, 0x36, 0x36, 0xff, 0x12, 0x12, 0x12, 0xff, 0x11, 0x11, 0x11, 0xff, 0x17, 0x17, 0x17, 0xff, 0x20, 0x20, 0x20, 0xff, 0x14, 0x14, 0x14, 0xff, 0x14, 0x14, 0x14, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x17, 0x17, 0x17, 0xff, 0x11, 0x11, 0x11, 0xff, 0x12, 0x12, 0x12, 0xff, 0x36, 0x36, 0x36, 0xff, 0x3d, 0x3d, 0x3d, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x49, 0x49, 0x49, 0xff, 0x2f, 0x2f, 0x2f, 0xff, 0x13, 0x13, 0x13, 0xff, 0x10, 0x10, 0x10, 0xff, 0x16, 0x16, 0x16, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x16, 0x16, 0x16, 0xff, 0x10, 0x10, 0x10, 0xff, 0x13, 0x13, 0x13, 0xff, 0x2f, 0x2f, 0x2f, 0xff, 0x4e, 0x4e, 0x4e, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x2e, 0x2e, 0x2e, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x15, 0x15, 0x15, 0xff, 0x16, 0x16, 0x16, 0xff, 0x0b, 0x0b, 0x0b, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x16, 0x16, 0x16, 0xff, 0x15, 0x15, 0x15, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x2f, 0x2f, 0x2f, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x27, 0x27, 0x27, 0xff, 0x14, 0x14, 0x14, 0xff, 0x16, 0x16, 0x16, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x0f, 0x0f, 0x0f, 0xff, 0x0f, 0x0f, 0x0f, 0xff, 0x1e, 0x1e, 0x1e, 0xff, 0x16, 0x16, 0x16, 0xff, 0x14, 0x14, 0x14, 0xff, 0x27, 0x27, 0x27, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xaa, 0xaa, 0xaa, 0xff, 0x44, 0x44, 0x44, 0xff, 0x15, 0x15, 0x15, 0xff, 0x07, 0x07, 0x07, 0xff, 0x04, 0x04, 0x04, 0xff, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0xff, 0x04, 0x04, 0x04, 0xff, 0x07, 0x07, 0x07, 0xff, 0x15, 0x15, 0x15, 0xff, 0x44, 0x44, 0x44, 0xff, 0xaa, 0xaa, 0xaa, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x40, 0x40, 0x40, 0xff, 0x15, 0x15, 0x15, 0xff, 0x0d, 0x0d, 0x0d, 0xff, 0x08, 0x08, 0x08, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x08, 0x08, 0x08, 0xff, 0x0c, 0x0c, 0x0c, 0xff, 0x15, 0x15, 0x15, 0xff, 0x40, 0x40, 0x40, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0xff, 0x55, 0x55, 0x55, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x40, 0x40, 0x40, 0xff, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};

const lv_img_dsc_t Chess_kdt45 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_COLOR_SIZE / 8,
  .data = Chess_kdt45_map,
};
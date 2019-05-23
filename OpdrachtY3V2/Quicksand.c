
#include "lvgl/lvgl.h"

/***********************************************************************************
 * Quicksand-Regular.otf 20 px Font in U+0030 (0) .. U+0098 ()  range with 1 bpp
 * Sparse font with only these characters: 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
***********************************************************************************/

/*Store the image of the letters (glyph)*/
static const uint8_t Quicksand_glyph_bitmap[] = 
{
  /*Unicode: U+0030 (0) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x66,  //.%%..%%. 
  0x42,  //.%....%. 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x42,  //.%....%. 
  0x66,  //.%%..%%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0031 (1) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x10,  //...% 
  0x70,  //.%%% 
  0x10,  //...% 
  0x10,  //...% 
  0x10,  //...% 
  0x10,  //...% 
  0x10,  //...% 
  0x10,  //...% 
  0x10,  //...% 
  0x10,  //...% 
  0x10,  //...% 
  0x10,  //...% 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0032 (2) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x42,  //.%....%. 
  0x01,  //.......% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x03,  //......%% 
  0x02,  //......%. 
  0x04,  //.....%.. 
  0x18,  //...%%... 
  0x30,  //..%%.... 
  0x60,  //.%%..... 
  0xff,  //%%%%%%%% 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0033 (3) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3f,  //..%%%%%% 
  0x02,  //......%. 
  0x04,  //.....%.. 
  0x08,  //....%... 
  0x0c,  //....%%.. 
  0x02,  //......%. 
  0x01,  //.......% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x42,  //.%....%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0034 (4) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x01, 0x00,  //.......%.. 
  0x03, 0x00,  //......%%.. 
  0x05, 0x00,  //.....%.%.. 
  0x05, 0x00,  //.....%.%.. 
  0x09, 0x00,  //....%..%.. 
  0x11, 0x00,  //...%...%.. 
  0x21, 0x00,  //..%....%.. 
  0x21, 0x00,  //..%....%.. 
  0x41, 0x00,  //.%.....%.. 
  0xff, 0x80,  //%%%%%%%%%. 
  0x01, 0x00,  //.......%.. 
  0x01, 0x00,  //.......%.. 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0035 (5) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x7f,  //.%%%%%%% 
  0x40,  //.%...... 
  0x40,  //.%...... 
  0x40,  //.%...... 
  0x7c,  //.%%%%%.. 
  0x46,  //.%...%%. 
  0x03,  //......%% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x42,  //.%....%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0036 (6) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x18,  //...%%... 
  0x20,  //..%..... 
  0x40,  //.%...... 
  0x40,  //.%...... 
  0xbc,  //%.%%%%.. 
  0xc2,  //%%....%. 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x42,  //.%....%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0037 (7) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xfe,  //%%%%%%%. 
  0x02,  //......%. 
  0x00,  //........ 
  0x04,  //.....%.. 
  0x04,  //.....%.. 
  0x08,  //....%... 
  0x08,  //....%... 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x20,  //..%..... 
  0x20,  //..%..... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0038 (8) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x38,  //..%%%... 
  0x44,  //.%...%.. 
  0x44,  //.%...%.. 
  0x6c,  //.%%.%%.. 
  0x38,  //..%%%... 
  0x46,  //.%...%%. 
  0x83,  //%.....%% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x42,  //.%....%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0039 (9) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x42,  //.%....%. 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x43,  //.%....%% 
  0x3f,  //..%%%%%% 
  0x02,  //......%. 
  0x02,  //......%. 
  0x04,  //.....%.. 
  0x38,  //..%%%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0041 (A) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x08, 0x00,  //....%..... 
  0x08, 0x00,  //....%..... 
  0x14, 0x00,  //...%.%.... 
  0x14, 0x00,  //...%.%.... 
  0x02, 0x00,  //......%... 
  0x22, 0x00,  //..%...%... 
  0x22, 0x00,  //..%...%... 
  0x41, 0x00,  //.%.....%.. 
  0x7f, 0x00,  //.%%%%%%%.. 
  0x41, 0x00,  //.%.....%.. 
  0x80, 0x80,  //%.......%. 
  0x80, 0x80,  //%.......%. 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0042 (B) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xf8,  //%%%%%.. 
  0x8c,  //%...%%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x88,  //%...%.. 
  0xf8,  //%%%%%.. 
  0x84,  //%....%. 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x84,  //%....%. 
  0xf8,  //%%%%%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0043 (C) , Width: 11 */
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x0f, 0x80,  //....%%%%%.. 
  0x30, 0xc0,  //..%%....%%. 
  0x60, 0x00,  //.%%........ 
  0x40, 0x00,  //.%......... 
  0x80, 0x00,  //%.......... 
  0x80, 0x00,  //%.......... 
  0x80, 0x00,  //%.......... 
  0x80, 0x00,  //%.......... 
  0x40, 0x00,  //.%......... 
  0x40, 0x00,  //.%......... 
  0x30, 0x40,  //..%%.....%. 
  0x0f, 0x80,  //....%%%%%.. 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 


  /*Unicode: U+0044 (D) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xf8,  //%%%%%... 
  0x84,  //%....%.. 
  0x82,  //%.....%. 
  0x82,  //%.....%. 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x82,  //%.....%. 
  0x82,  //%.....%. 
  0x84,  //%....%.. 
  0xf8,  //%%%%%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0045 (E) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xfe,  //%%%%%%%. 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0xfc,  //%%%%%%.. 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0xfe,  //%%%%%%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0046 (F) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xfe,  //%%%%%%%. 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0xfc,  //%%%%%%.. 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0047 (G) , Width: 11 */
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x0f, 0x80,  //....%%%%%.. 
  0x30, 0x60,  //..%%.....%% 
  0x60, 0x00,  //.%%........ 
  0x40, 0x00,  //.%......... 
  0x80, 0x00,  //%.......... 
  0x80, 0x00,  //%.......... 
  0x83, 0xe0,  //%.....%%%%% 
  0x80, 0x20,  //%.........% 
  0x40, 0x20,  //.%........% 
  0x60, 0x20,  //.%%.......% 
  0x30, 0x60,  //..%%.....%% 
  0x0f, 0x80,  //....%%%%%.. 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 


  /*Unicode: U+0048 (H) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0xff,  //%%%%%%%% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0049 (I) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+004a (J) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x40, 0x80,  //.%......% 
  0x21, 0x00,  //..%....%. 
  0x1e, 0x00,  //...%%%%.. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+004b (K) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x80, 0x80,  //%.......% 
  0x81, 0x00,  //%......%. 
  0x82, 0x00,  //%.....%.. 
  0x84, 0x00,  //%....%... 
  0x88, 0x00,  //%...%.... 
  0x90, 0x00,  //%..%..... 
  0xa8, 0x00,  //%.%.%.... 
  0xc4, 0x00,  //%%...%... 
  0x82, 0x00,  //%.....%.. 
  0x82, 0x00,  //%.....%.. 
  0x81, 0x00,  //%......%. 
  0x80, 0x80,  //%.......% 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+004c (L) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0xfe,  //%%%%%%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+004d (M) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x80, 0x40,  //%........% 
  0xc0, 0xc0,  //%%......%% 
  0xc0, 0xc0,  //%%......%% 
  0xa1, 0x40,  //%.%....%.% 
  0x92, 0x40,  //%..%..%..% 
  0x88, 0x40,  //%...%....% 
  0x8c, 0x40,  //%...%%...% 
  0x80, 0x40,  //%........% 
  0x80, 0x40,  //%........% 
  0x80, 0x40,  //%........% 
  0x80, 0x40,  //%........% 
  0x80, 0x40,  //%........% 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+004e (N) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x80, 0x80,  //%.......% 
  0xc0, 0x80,  //%%......% 
  0xc0, 0x80,  //%%......% 
  0xa0, 0x80,  //%.%.....% 
  0x90, 0x80,  //%..%....% 
  0x88, 0x80,  //%...%...% 
  0x88, 0x80,  //%...%...% 
  0x84, 0x80,  //%....%..% 
  0x82, 0x80,  //%.....%.% 
  0x82, 0x80,  //%.....%.% 
  0x81, 0x80,  //%......%% 
  0x80, 0x80,  //%.......% 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+004f (O) , Width: 12 */
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x0f, 0x00,  //....%%%%.... 
  0x30, 0xc0,  //..%%....%%.. 
  0x60, 0x60,  //.%%......%%. 
  0x40, 0x20,  //.%........%. 
  0x80, 0x10,  //%..........% 
  0x80, 0x10,  //%..........% 
  0x80, 0x10,  //%..........% 
  0x80, 0x10,  //%..........% 
  0x40, 0x20,  //.%........%. 
  0x40, 0x20,  //.%........%. 
  0x30, 0xc0,  //..%%....%%.. 
  0x0f, 0x00,  //....%%%%.... 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 


  /*Unicode: U+0050 (P) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xf8,  //%%%%%.. 
  0x84,  //%....%. 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x84,  //%....%. 
  0xf8,  //%%%%%.. 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0051 (Q) , Width: 13 */
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x0f, 0x00,  //....%%%%..... 
  0x30, 0xc0,  //..%%....%%... 
  0x60, 0x60,  //.%%......%%.. 
  0x40, 0x20,  //.%........%.. 
  0x80, 0x10,  //%..........%. 
  0x80, 0x10,  //%..........%. 
  0x80, 0x10,  //%..........%. 
  0x80, 0x10,  //%..........%. 
  0x40, 0x20,  //.%........%.. 
  0x40, 0x20,  //.%........%.. 
  0x30, 0xc0,  //..%%....%%... 
  0x0f, 0x00,  //....%%%%..... 
  0x0e, 0x00,  //....%%%...... 
  0x01, 0x88,  //.......%%...% 
  0x00, 0x70,  //.........%%%. 
  0x00, 0x00,  //............. 


  /*Unicode: U+0052 (R) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0xfc, 0x00,  //%%%%%%... 
  0x82, 0x00,  //%.....%.. 
  0x81, 0x00,  //%......%. 
  0x81, 0x00,  //%......%. 
  0x81, 0x00,  //%......%. 
  0x82, 0x00,  //%.....%.. 
  0xfc, 0x00,  //%%%%%%... 
  0x82, 0x00,  //%.....%.. 
  0x81, 0x00,  //%......%. 
  0x81, 0x00,  //%......%. 
  0x81, 0x00,  //%......%. 
  0x81, 0x00,  //%......%. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0053 (S) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x3c, 0x00,  //..%%%%... 
  0x43, 0x00,  //.%....%%. 
  0x80, 0x00,  //%........ 
  0x80, 0x00,  //%........ 
  0x40, 0x00,  //.%....... 
  0x30, 0x00,  //..%%..... 
  0x06, 0x00,  //.....%%.. 
  0x01, 0x80,  //.......%% 
  0x00, 0x80,  //........% 
  0x00, 0x80,  //........% 
  0x41, 0x00,  //.%.....%. 
  0x3e, 0x00,  //..%%%%%.. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0054 (T) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0xff, 0x80,  //%%%%%%%%% 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x08, 0x00,  //....%.... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0055 (U) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x41, 0x00,  //.%.....%. 
  0x63, 0x00,  //.%%...%%. 
  0x1c, 0x00,  //...%%%... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0056 (V) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x80, 0x40,  //%........% 
  0x40, 0x00,  //.%........ 
  0x40, 0x80,  //.%......%. 
  0x00, 0x80,  //........%. 
  0x21, 0x00,  //..%....%.. 
  0x21, 0x00,  //..%....%.. 
  0x12, 0x00,  //...%..%... 
  0x12, 0x00,  //...%..%... 
  0x08, 0x00,  //....%..... 
  0x0c, 0x00,  //....%%.... 
  0x0c, 0x00,  //....%%.... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0057 (W) , Width: 17 */
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x80, 0x00, 0x80,  //%...............% 
  0x80, 0x00, 0x80,  //%...............% 
  0x40, 0x01, 0x00,  //.%.............%. 
  0x40, 0x81, 0x00,  //.%......%......%. 
  0x20, 0x80, 0x00,  //..%.....%........ 
  0x21, 0x42, 0x00,  //..%....%.%....%.. 
  0x01, 0x42, 0x00,  //.......%.%....%.. 
  0x12, 0x24, 0x00,  //...%..%...%..%... 
  0x12, 0x24, 0x00,  //...%..%...%..%... 
  0x08, 0x18, 0x00,  //....%......%%.... 
  0x0c, 0x18, 0x00,  //....%%.....%%.... 
  0x04, 0x10, 0x00,  //.....%.....%..... 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 


  /*Unicode: U+0058 (X) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x80,  //........%. 
  0x40, 0x80,  //.%......%. 
  0x21, 0x00,  //..%....%.. 
  0x22, 0x00,  //..%...%... 
  0x14, 0x00,  //...%.%.... 
  0x0c, 0x00,  //....%%.... 
  0x0c, 0x00,  //....%%.... 
  0x14, 0x00,  //...%.%.... 
  0x22, 0x00,  //..%...%... 
  0x21, 0x00,  //..%....%.. 
  0x41, 0x00,  //.%.....%.. 
  0x80, 0x80,  //%.......%. 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0059 (Y) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x80, 0x80,  //%.......%. 
  0xc1, 0x00,  //%%.....%.. 
  0x41, 0x00,  //.%.....%.. 
  0x22, 0x00,  //..%...%... 
  0x14, 0x00,  //...%.%.... 
  0x1c, 0x00,  //...%%%.... 
  0x08, 0x00,  //....%..... 
  0x08, 0x00,  //....%..... 
  0x08, 0x00,  //....%..... 
  0x08, 0x00,  //....%..... 
  0x08, 0x00,  //....%..... 
  0x08, 0x00,  //....%..... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+005a (Z) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0xff, 0x80,  //%%%%%%%%%. 
  0x00, 0x00,  //.......... 
  0x01, 0x00,  //.......%.. 
  0x02, 0x00,  //......%... 
  0x04, 0x00,  //.....%.... 
  0x04, 0x00,  //.....%.... 
  0x08, 0x00,  //....%..... 
  0x10, 0x00,  //...%...... 
  0x20, 0x00,  //..%....... 
  0x20, 0x00,  //..%....... 
  0x40, 0x00,  //.%........ 
  0xff, 0x80,  //%%%%%%%%%. 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0061 (a) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3d,  //..%%%%.% 
  0x43,  //.%....%% 
  0xc3,  //%%....%% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x43,  //.%....%% 
  0x3d,  //..%%%%.% 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0062 (b) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x80, 0x00,  //%........ 
  0x80, 0x00,  //%........ 
  0x80, 0x00,  //%........ 
  0x80, 0x00,  //%........ 
  0x9e, 0x00,  //%..%%%%.. 
  0xe3, 0x00,  //%%%...%%. 
  0xc1, 0x80,  //%%.....%% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0xc1, 0x00,  //%%.....%. 
  0xbe, 0x00,  //%.%%%%%.. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0063 (c) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x62,  //.%%...%. 
  0xc0,  //%%...... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x40,  //.%...... 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0064 (d) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x01,  //.......% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x3d,  //..%%%%.% 
  0x43,  //.%....%% 
  0xc1,  //%%.....% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x43,  //.%....%% 
  0x3d,  //..%%%%.% 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0065 (e) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x3c, 0x00,  //..%%%%... 
  0x42, 0x00,  //.%....%.. 
  0x81, 0x00,  //%......%. 
  0xff, 0x00,  //%%%%%%%%. 
  0x80, 0x00,  //%........ 
  0x80, 0x00,  //%........ 
  0x42, 0x00,  //.%....%.. 
  0x3c, 0x00,  //..%%%%... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0066 (f) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x30,  //..%% 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0xe0,  //%%%. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0067 (g) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3d,  //..%%%%.% 
  0x43,  //.%....%% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x43,  //.%....%% 
  0x3d,  //..%%%%.% 
  0x01,  //.......% 
  0x02,  //......%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 


  /*Unicode: U+0068 (h) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0x80,  //%....... 
  0xbc,  //%.%%%%.. 
  0xc2,  //%%....%. 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0069 (i) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+006a (j) , Width: 2 */
  0x00,  //.. 
  0x00,  //.. 
  0x00,  //.. 
  0x00,  //.. 
  0x00,  //.. 
  0x40,  //.% 
  0x00,  //.. 
  0x00,  //.. 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x40,  //.% 
  0x80,  //%. 
  0x00,  //.. 


  /*Unicode: U+006b (k) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x84,  //%....%. 
  0x88,  //%...%.. 
  0x90,  //%..%... 
  0xb0,  //%.%%... 
  0xd0,  //%%.%... 
  0x88,  //%...%.. 
  0x84,  //%....%. 
  0x80,  //%...... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+006c (l) , Width: 1 */
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x80,  //% 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 
  0x00,  //. 


  /*Unicode: U+006d (m) , Width: 13 */
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0xb8, 0xe0,  //%.%%%...%%%.. 
  0xc5, 0x10,  //%%...%.%...%. 
  0x82, 0x08,  //%.....%.....% 
  0x82, 0x08,  //%.....%.....% 
  0x82, 0x08,  //%.....%.....% 
  0x82, 0x08,  //%.....%.....% 
  0x82, 0x08,  //%.....%.....% 
  0x82, 0x08,  //%.....%.....% 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+006e (n) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xb8,  //%.%%%.. 
  0xc4,  //%%...%. 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+006f (o) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x42,  //.%....%. 
  0xc3,  //%%....%% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x42,  //.%....%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0070 (p) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x9e, 0x00,  //%..%%%%.. 
  0xe3, 0x00,  //%%%...%%. 
  0x81, 0x80,  //%......%% 
  0x80, 0x80,  //%.......% 
  0x80, 0x80,  //%.......% 
  0xc1, 0x80,  //%%.....%% 
  0xe3, 0x00,  //%%%...%%. 
  0x9e, 0x00,  //%..%%%%.. 
  0x80, 0x00,  //%........ 
  0x80, 0x00,  //%........ 
  0x80, 0x00,  //%........ 
  0x00, 0x00,  //......... 


  /*Unicode: U+0071 (q) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3d,  //..%%%%.% 
  0x43,  //.%....%% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x81,  //%......% 
  0x43,  //.%....%% 
  0x3d,  //..%%%%.% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x01,  //.......% 
  0x00,  //........ 


  /*Unicode: U+0072 (r) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x98,  //%..%% 
  0xa0,  //%.%.. 
  0xc0,  //%%... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x80,  //%.... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0073 (s) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0xc4,  //%%...%. 
  0x80,  //%...... 
  0x60,  //.%%.... 
  0x08,  //....%.. 
  0x04,  //.....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0074 (t) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x70,  //.%%%. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x20,  //..%.. 
  0x30,  //..%%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0075 (u) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x44,  //.%...%. 
  0x38,  //..%%%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0076 (v) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x82,  //%.....% 
  0x80,  //%...... 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x28,  //..%.%.. 
  0x28,  //..%.%.. 
  0x10,  //...%... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0077 (w) , Width: 12 */
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x80, 0x10,  //%..........% 
  0x00, 0x20,  //..........%. 
  0x44, 0x20,  //.%...%....%. 
  0x46, 0x00,  //.%...%%..... 
  0x2a, 0x40,  //..%.%.%..%.. 
  0x29, 0x40,  //..%.%..%.%.. 
  0x11, 0x80,  //...%...%%... 
  0x10, 0x80,  //...%....%... 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 


  /*Unicode: U+0078 (x) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x84,  //%....%. 
  0x44,  //.%...%. 
  0x28,  //..%.%.. 
  0x10,  //...%... 
  0x30,  //..%%... 
  0x28,  //..%.%.. 
  0x44,  //.%...%. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0079 (y) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x82,  //%.....% 
  0x46,  //.%...%% 
  0x3a,  //..%%%.% 
  0x02,  //......% 
  0x04,  //.....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 


  /*Unicode: U+007a (z) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xfc,  //%%%%%%. 
  0x04,  //.....%. 
  0x08,  //....%.. 
  0x10,  //...%... 
  0x20,  //..%.... 
  0x20,  //..%.... 
  0x40,  //.%..... 
  0xfc,  //%%%%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


};


/*Store the glyph descriptions*/
static const lv_font_glyph_dsc_t Quicksand_glyph_dsc[] = 
{
  {.w_px = 8,	.glyph_index = 0},	/*Unicode: U+0030 (0)*/
  {.w_px = 4,	.glyph_index = 20},	/*Unicode: U+0031 (1)*/
  {.w_px = 8,	.glyph_index = 40},	/*Unicode: U+0032 (2)*/
  {.w_px = 8,	.glyph_index = 60},	/*Unicode: U+0033 (3)*/
  {.w_px = 10,	.glyph_index = 80},	/*Unicode: U+0034 (4)*/
  {.w_px = 8,	.glyph_index = 120},	/*Unicode: U+0035 (5)*/
  {.w_px = 8,	.glyph_index = 140},	/*Unicode: U+0036 (6)*/
  {.w_px = 8,	.glyph_index = 160},	/*Unicode: U+0037 (7)*/
  {.w_px = 8,	.glyph_index = 180},	/*Unicode: U+0038 (8)*/
  {.w_px = 8,	.glyph_index = 200},	/*Unicode: U+0039 (9)*/
  {.w_px = 10,	.glyph_index = 220},	/*Unicode: U+0041 (A)*/
  {.w_px = 7,	.glyph_index = 260},	/*Unicode: U+0042 (B)*/
  {.w_px = 11,	.glyph_index = 280},	/*Unicode: U+0043 (C)*/
  {.w_px = 8,	.glyph_index = 320},	/*Unicode: U+0044 (D)*/
  {.w_px = 8,	.glyph_index = 340},	/*Unicode: U+0045 (E)*/
  {.w_px = 8,	.glyph_index = 360},	/*Unicode: U+0046 (F)*/
  {.w_px = 11,	.glyph_index = 380},	/*Unicode: U+0047 (G)*/
  {.w_px = 8,	.glyph_index = 420},	/*Unicode: U+0048 (H)*/
  {.w_px = 1,	.glyph_index = 440},	/*Unicode: U+0049 (I)*/
  {.w_px = 9,	.glyph_index = 460},	/*Unicode: U+004a (J)*/
  {.w_px = 9,	.glyph_index = 500},	/*Unicode: U+004b (K)*/
  {.w_px = 8,	.glyph_index = 540},	/*Unicode: U+004c (L)*/
  {.w_px = 10,	.glyph_index = 560},	/*Unicode: U+004d (M)*/
  {.w_px = 9,	.glyph_index = 600},	/*Unicode: U+004e (N)*/
  {.w_px = 12,	.glyph_index = 640},	/*Unicode: U+004f (O)*/
  {.w_px = 7,	.glyph_index = 680},	/*Unicode: U+0050 (P)*/
  {.w_px = 13,	.glyph_index = 700},	/*Unicode: U+0051 (Q)*/
  {.w_px = 9,	.glyph_index = 740},	/*Unicode: U+0052 (R)*/
  {.w_px = 9,	.glyph_index = 780},	/*Unicode: U+0053 (S)*/
  {.w_px = 9,	.glyph_index = 820},	/*Unicode: U+0054 (T)*/
  {.w_px = 9,	.glyph_index = 860},	/*Unicode: U+0055 (U)*/
  {.w_px = 10,	.glyph_index = 900},	/*Unicode: U+0056 (V)*/
  {.w_px = 17,	.glyph_index = 940},	/*Unicode: U+0057 (W)*/
  {.w_px = 10,	.glyph_index = 1000},	/*Unicode: U+0058 (X)*/
  {.w_px = 10,	.glyph_index = 1040},	/*Unicode: U+0059 (Y)*/
  {.w_px = 10,	.glyph_index = 1080},	/*Unicode: U+005a (Z)*/
  {.w_px = 8,	.glyph_index = 1120},	/*Unicode: U+0061 (a)*/
  {.w_px = 9,	.glyph_index = 1140},	/*Unicode: U+0062 (b)*/
  {.w_px = 8,	.glyph_index = 1180},	/*Unicode: U+0063 (c)*/
  {.w_px = 8,	.glyph_index = 1200},	/*Unicode: U+0064 (d)*/
  {.w_px = 9,	.glyph_index = 1220},	/*Unicode: U+0065 (e)*/
  {.w_px = 4,	.glyph_index = 1260},	/*Unicode: U+0066 (f)*/
  {.w_px = 8,	.glyph_index = 1280},	/*Unicode: U+0067 (g)*/
  {.w_px = 8,	.glyph_index = 1300},	/*Unicode: U+0068 (h)*/
  {.w_px = 1,	.glyph_index = 1320},	/*Unicode: U+0069 (i)*/
  {.w_px = 2,	.glyph_index = 1340},	/*Unicode: U+006a (j)*/
  {.w_px = 7,	.glyph_index = 1360},	/*Unicode: U+006b (k)*/
  {.w_px = 1,	.glyph_index = 1380},	/*Unicode: U+006c (l)*/
  {.w_px = 13,	.glyph_index = 1400},	/*Unicode: U+006d (m)*/
  {.w_px = 7,	.glyph_index = 1440},	/*Unicode: U+006e (n)*/
  {.w_px = 8,	.glyph_index = 1460},	/*Unicode: U+006f (o)*/
  {.w_px = 9,	.glyph_index = 1480},	/*Unicode: U+0070 (p)*/
  {.w_px = 8,	.glyph_index = 1520},	/*Unicode: U+0071 (q)*/
  {.w_px = 5,	.glyph_index = 1540},	/*Unicode: U+0072 (r)*/
  {.w_px = 7,	.glyph_index = 1560},	/*Unicode: U+0073 (s)*/
  {.w_px = 5,	.glyph_index = 1580},	/*Unicode: U+0074 (t)*/
  {.w_px = 7,	.glyph_index = 1600},	/*Unicode: U+0075 (u)*/
  {.w_px = 7,	.glyph_index = 1620},	/*Unicode: U+0076 (v)*/
  {.w_px = 12,	.glyph_index = 1640},	/*Unicode: U+0077 (w)*/
  {.w_px = 7,	.glyph_index = 1680},	/*Unicode: U+0078 (x)*/
  {.w_px = 7,	.glyph_index = 1700},	/*Unicode: U+0079 (y)*/
  {.w_px = 7,	.glyph_index = 1720},	/*Unicode: U+007a (z)*/
};

/*List of unicode characters*/
static const uint32_t Quicksand_unicode_list[] = {
  48,	/*Unicode: U+0030 (0)*/
  49,	/*Unicode: U+0031 (1)*/
  50,	/*Unicode: U+0032 (2)*/
  51,	/*Unicode: U+0033 (3)*/
  52,	/*Unicode: U+0034 (4)*/
  53,	/*Unicode: U+0035 (5)*/
  54,	/*Unicode: U+0036 (6)*/
  55,	/*Unicode: U+0037 (7)*/
  56,	/*Unicode: U+0038 (8)*/
  57,	/*Unicode: U+0039 (9)*/
  65,	/*Unicode: U+0041 (A)*/
  66,	/*Unicode: U+0042 (B)*/
  67,	/*Unicode: U+0043 (C)*/
  68,	/*Unicode: U+0044 (D)*/
  69,	/*Unicode: U+0045 (E)*/
  70,	/*Unicode: U+0046 (F)*/
  71,	/*Unicode: U+0047 (G)*/
  72,	/*Unicode: U+0048 (H)*/
  73,	/*Unicode: U+0049 (I)*/
  74,	/*Unicode: U+004a (J)*/
  75,	/*Unicode: U+004b (K)*/
  76,	/*Unicode: U+004c (L)*/
  77,	/*Unicode: U+004d (M)*/
  78,	/*Unicode: U+004e (N)*/
  79,	/*Unicode: U+004f (O)*/
  80,	/*Unicode: U+0050 (P)*/
  81,	/*Unicode: U+0051 (Q)*/
  82,	/*Unicode: U+0052 (R)*/
  83,	/*Unicode: U+0053 (S)*/
  84,	/*Unicode: U+0054 (T)*/
  85,	/*Unicode: U+0055 (U)*/
  86,	/*Unicode: U+0056 (V)*/
  87,	/*Unicode: U+0057 (W)*/
  88,	/*Unicode: U+0058 (X)*/
  89,	/*Unicode: U+0059 (Y)*/
  90,	/*Unicode: U+005a (Z)*/
  97,	/*Unicode: U+0061 (a)*/
  98,	/*Unicode: U+0062 (b)*/
  99,	/*Unicode: U+0063 (c)*/
  100,	/*Unicode: U+0064 (d)*/
  101,	/*Unicode: U+0065 (e)*/
  102,	/*Unicode: U+0066 (f)*/
  103,	/*Unicode: U+0067 (g)*/
  104,	/*Unicode: U+0068 (h)*/
  105,	/*Unicode: U+0069 (i)*/
  106,	/*Unicode: U+006a (j)*/
  107,	/*Unicode: U+006b (k)*/
  108,	/*Unicode: U+006c (l)*/
  109,	/*Unicode: U+006d (m)*/
  110,	/*Unicode: U+006e (n)*/
  111,	/*Unicode: U+006f (o)*/
  112,	/*Unicode: U+0070 (p)*/
  113,	/*Unicode: U+0071 (q)*/
  114,	/*Unicode: U+0072 (r)*/
  115,	/*Unicode: U+0073 (s)*/
  116,	/*Unicode: U+0074 (t)*/
  117,	/*Unicode: U+0075 (u)*/
  118,	/*Unicode: U+0076 (v)*/
  119,	/*Unicode: U+0077 (w)*/
  120,	/*Unicode: U+0078 (x)*/
  121,	/*Unicode: U+0079 (y)*/
  122,	/*Unicode: U+007a (z)*/
  0,    /*End indicator*/
};

lv_font_t Quicksand = 
{
    .unicode_first = 48,	/*First Unicode letter in this font*/
    .unicode_last = 152,	/*Last Unicode letter in this font*/
    .h_px = 20,				/*Font height in pixels*/
    .glyph_bitmap = Quicksand_glyph_bitmap,	/*Bitmap of glyphs*/
    .glyph_dsc = Quicksand_glyph_dsc,		/*Description of glyphs*/
    .glyph_cnt = 62,			/*Number of glyphs in the font*/
    .unicode_list = Quicksand_unicode_list,	/*List of unicode characters*/
    .get_bitmap = lv_font_get_bitmap_sparse,	/*Function pointer to get glyph's bitmap*/
    .get_width = lv_font_get_width_sparse,	/*Function pointer to get glyph's width*/
    .bpp = 1,				/*Bit per pixel*/
    .monospace = 0,				/*Fix width (0: if not used)*/
    .next_page = NULL,		/*Pointer to a font extension*/
};
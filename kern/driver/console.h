#ifndef __KERN_DRIVER_CONSOLE_H__
#define __KERN_DRIVER_CONSOLE_H__

void cons_init(void);
void cons_putc(int c);
int cons_getc(void);
void serial_intr(void);
void kbd_intr(void);
extern bool cga_colorful;
extern int default_cga_color;

#define CGA_BG_COLOR(color)    ((color) << 12)
#define CGA_FG_COLOR(color)    ((color) << 8)
// must use within CGA_BG_COLOR or CGA_FG_COLOR
#define CGA_BLACK       0x0
#define CGA_BLUE        0x1
#define CGA_GREEN       0x2
#define CGA_CYAN        0x3
#define CGA_RED         0x4
#define CGA_MAGENTA     0x5
#define CGA_BROWN       0x6
#define CGA_LIGHT_GRAY  0x7
#define CGA_DARK_GRAY   0x8
#define CGA_LIGHT_BLUE  0x9
#define CGA_LIGHT_GREEN 0xa
#define CGA_LIGHTCYAN   0xb
#define CGA_LIGHT_RED   0xc
#define CGA_LIGHT_MEGENTA 0xd
#define CGA_YELLOW      0xe
#define CGA_WHITE       0xf

#endif /* !__KERN_DRIVER_CONSOLE_H__ */


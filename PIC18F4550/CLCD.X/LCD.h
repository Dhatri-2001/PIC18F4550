/* 
 * File:   clcd.h
 */

#ifndef CLCD_H
#define	CLCD_H

#define _XTAL_FREQ                  20000000

#define CLCD_DATA_PORT_DDR          TRISD
#define CLCD_RS_DDR                 TRISEbits.RE2
#define CLCD_EN_DDR                 TRISEbits.RE1

#define CLCD_DATA_PORT              PORTD
#define CLCD_RS                     PORTEbits.RE2
#define CLCD_EN                     PORTEbits.RE1

#define INST_MODE                   0
#define DATA_MODE                   1

#define HI                          1
#define LOW                         0

#define LINE1(x)                    (0x80 + x)
#define LINE2(x)                    (0xC0 + x)

#define EIGHT_BIT_MODE              0x33
#define FOUR_BIT_MODE               0x02
#define TWO_LINES_5x8_8_BIT_MODE    0x38
#define TWO_LINES_5x8_4_BIT_MODE    0x28

#define     CLCD_DISPLAY_ON_CURSOR_OFF  0X0C
#define     CLCD_CLEAR_SCREEN           0X01
#define     CLCD_RETURN_HOME            0X02
#define     CLCD_CURSOR_BACK            0X10
#define     CLCD_CURSOR_FWD             0X14
#define     CLCD_SHIFT_DISPLAY_LEFT     0X18
#define     CLCD_SHIFT_DISPLAY_RIGHT    0X1C
#define     CLCD_CURSOR_ON              0X0E
#define     CLCD_CURSOR_OFF             0X0C
#define     CLCD_CURSOR_BLINK           0X0F

void init_clcd(void);
void clcd_putch(const char data, unsigned char addr);
void clcd_print(const char *str, unsigned char addr);
void clcd_4_bit_mode(void);
void display_controller(void);
#endif	/* CLCD_H */

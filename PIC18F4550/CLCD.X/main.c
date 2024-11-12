/*
 * File:   main.c
 */

#include <xc.h>
#include "config_PIC18F4550.h"
#include "LCD.h"
#include "push_buttons.h"
//
//#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT disabled)
unsigned int bit_mode = 1;
static void init_config(void) {
    init_clcd();
    init_switch();
}

void main(void) {
    init_config();
    unsigned char once = 1;
    while (1) {
        if (SWITCH_RB0 == LOW )
        {
            bit_mode = 1;
            display_controller();
            clcd_print("8-bit mode", LINE1(2));
            clcd_print("Yayy!!", LINE2(4));
            bit_mode = 0;
            once = 0;
        }
        else if (SWITCH_RB1 == LOW)
        {
            bit_mode = 0;
            display_controller();
            clcd_print("4-bit mode", LINE1(2));
            clcd_print("Yayy!!", LINE2(4));
            once = 0;
        }
        
    }
    return;
}
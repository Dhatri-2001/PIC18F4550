/*
 * File:   switch.c
 * Author: dhatri
 *
 * Created on November 12, 2024, 12:09 PM
 */


#include <xc.h>
#include "push_buttons.h"

void init_switch(void) {
    //initialise the TRISB as input port 
    SWITCH_DDR_RB0 = 0x01;
    SWITCH_DDR_RB1 = 0x01;
    
    // If switch is pressed then RB0/1 becomes 0; so initially assume that switch is an open switch (not pressed); hence 
    // RB0/1 = 1
    SWITCH_RB0 = 0x01;
    SWITCH_RB1 = 0x01;
    
    return;
}

#include <xc.h>
#ifndef PUSH_BUTTONS_H
#define PUSH_BUTTONS_H

#define SWITCH_DDR_RB0      TRISBbits.RB2
#define SWITCH_DDR_RB1      TRISBbits.RB1

#define SWITCH_RB0     PORTBbits.RB2
#define SWITCH_RB1     PORTBbits.RB1


void init_switch(void);
#endif
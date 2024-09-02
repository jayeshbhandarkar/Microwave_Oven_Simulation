/*
 * File:   main.c
 * Author: bhand
 *
 * Created on October 6, 2023, 8:17 PM
 */


#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)

static void init_config(void) {
    LED1 = OFF;
    LED1_DDR = 0;
    SW1_DDR = 1;
     TRISD = 0x00;
    PORTD = 0x00;
}

void main(void) {
    int once = 1;
    
    init_config();

    while (1) {
        if ((SW1 == PRESSED) && once)
        {
            LED1 = !LED1;
            
            once = 0;
        }
        else if (SW1 == RELEASED)// RB0 == 1
        {
            once = 1;
        }
    }
    return;
}

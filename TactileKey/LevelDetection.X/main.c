/*
 * File:   main.c
 * Author: bhand
 *
 * Created on October 6, 2023, 7:46 PM
 */

#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)

static void init_config(void) {
    
    LED1_DDR = 0; // RD0 -> output, TRISD0
    LED1 = 0; // OFF 
    SW1_DDR = 1; // RB0 -> input
    TRISD = 0x00;
    PORTD = 0x00;
  
}

void main(void) {
    init_config();

    while (1) {
        if (SW1 == PRESSED) // if (RB0 == 0)
        {
            LED1 = !LED1;
            for(unsigned long int delay = 100000; delay > 0; delay--);
        
        }
       
    }
    return;
}


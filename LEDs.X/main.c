/*
 * File:   main.c
 * Author: bhand
 *
 * Created on September 10, 2023, 10:13 PM
 */


#include <xc.h>
#include"main.h"
#pragma config WDTE = OFF // Watching timer disabled

static void init_config(void)
{
    LED_ARRAY_DDR = 0x00; // Set PORTB as Output port
    LED_ARRAY = 0X00; //LED_ARRAY -> OFF
}

void main(void) 
{
    unsigned int delay;
    init_config(); // Calling initialization function
    while(1)
    {
        // Toggling the LEDs
        LED_ARRAY = ~LED_ARRAY; // Turning ON LEDs
        
        // Delay
        for(delay = 50000; delay > 0; delay--);
    }
}



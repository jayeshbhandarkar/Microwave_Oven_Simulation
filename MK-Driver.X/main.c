/*
 * File:   main.c
 * Author: bhand
 *
 * Created on October 6, 2023, 8:45 PM
 */


#include <xc.h>
#include "matrix_keypad.h"
#include "main.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT disabled)



static void init_config(void) {

    init_matrix_keypad();
    LED4_DDR  = 0;
    LED4 = 0;
    
}

void main(void) {
    unsigned char key;
    
    init_config();

    while (1) {
        key = read_matrix_keypad(LEVEL);  //0 1 2 3 4 5 6 7 8 9 '*' '#' ALL_RELEASED
        // IF MKP key * is pressed turn TOGGLE  LED4
        if(key == '*')//  IF MKP key '*'
        {
            LED4 = !LED4;
            for(unsigned long int delay = 50000; delay > 0; delay-- );
        }
     
    }
    return;
}

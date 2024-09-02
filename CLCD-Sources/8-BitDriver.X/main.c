
#include <xc.h>
#include "clcd.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT disabled)

static void init_config(void) {
    init_clcd();
}

void main(void) {
    init_config();

    while (1) {
        clcd_print("Hello", LINE1(0));
        clcd_print("World", LINE2(2));
        clcd_print("Welcome", LINE3(3));
        clcd_print("Embedded", LINE4(4));
    }
    return;
}

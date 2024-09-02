
#include <xc.h>
#include "clcd.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT disabled)

static void init_config(void) {
    init_clcd();
}

void main(void) {
    init_config();

    while (1) {
        // 4 + '0' -> '4'
        clcd_putch(5 + '0', LINE1(4));
        clcd_print("Hello", LINE2(4));
        clcd_putch(4 + '0', LINE3(4));
        clcd_print("World", LINE4(4));
    }
    return;
}

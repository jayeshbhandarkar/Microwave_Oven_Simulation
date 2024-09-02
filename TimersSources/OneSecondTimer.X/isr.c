#include <xc.h>
#include "main.h"

void  __interrupt() isr(void)
{
    static unsigned int count = 0; // 2B
    
    if (TMR0IF == 1)
    {
        /* TMR0 Register valur + 6 (offset count to get 250 ticks) + 2 Inst Cycle */
        TMR0 = TMR0 + 8;
       
 
        if (++count == 10000) // 0.5sec
        {
            count = 0;
            
            LED1 = !LED1;
        }
        
        TMR0IF = 0;
    }
}
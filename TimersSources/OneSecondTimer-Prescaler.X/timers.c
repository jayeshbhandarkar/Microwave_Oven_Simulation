#include <xc.h>

void init_timer0(void)
{
    /* Setting the internal clock source */
    T0CS = 0;
    
    /* Assinging the prescaler to Timer0 */
    PSA = 0;
    
    /* Setting the scale to 1:16 */
    PS0 = 1;
    PS1 = 1;
    PS2 = 0;

    TMR0 = 6;
    
    /* The timer interrupt is enabled */
    TMR0IE = 1;
}

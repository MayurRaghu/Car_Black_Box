#include <xc.h>
#include "main.h"
#include "timer0.h"
unsigned short blink;
extern unsigned short wait_flag;
unsigned short wait = 60;
void interrupt isr(void)
{
    static unsigned short for_minute;
    static unsigned short count;
    if (TMR2IF)
    {
	if (count++ == 20000)
	{
	    blink++;
	    if(wait_flag == 1)
		wait--;
	    count = 0;
	}
    }
    TMR2IF = 0;
}

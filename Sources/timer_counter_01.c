#include <W78E052.h>
#define TIMER0_VLAUE_10ms 0xDC00
#define TIMER0_H ((TIMER0_VLAUE_10ms & 0xFF00)>>8)
#define TIMER0_L (TIMER0_VLAUE_10ms & 0x00FF)

#define LED P10

void timer_interrupt () interrupt 1
{
		static int i = 0;
    TL0= TIMER0_L;  //0x00
    TH0= TIMER0_H;  //0xDC
    //loop for 100*10ms = 1000ms/1s

		if(i>=100)
			{
				LED= ~LED;
				i=0;
			}
			else
			{
				i++;
			}
}


void main()
{
    TMOD = 0x01;
    TH0 = TIMER0_H;  //0xDC
    TL0 = TIMER0_L;  //0x00
    ET0 = 1;
    EA = 1;
    TR0 = 1;    //start timer()
		while(1)
    {
        ;
    }
}

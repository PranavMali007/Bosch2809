#include <W78E052.h>
#define TIMER0_VLAUE_10ms 0xDC00
#define TIMER0_H ((TIMER0_VLAUE_10ms & 0xFF00)>>8)
#define TIMER0_L (TIMER0_VLAUE_10ms & 0x00FF)
#define TIMER1_VLAUE_10ms 0xDC00
#define TIMER1_H ((TIMER0_VLAUE_10ms & 0xFF00)>>8)
#define TIMER1_L (TIMER0_VLAUE_10ms & 0x00FF)

#define LED P10

void timer_interrupt () interrupt 1
{
		static int i=0;
		static short Bit= 0x1;
    TL0= TIMER0_L;  //0x00
    TH0= TIMER0_H;  //0xDC
    //loop for 100*10ms = 1000ms/1s
		
	if(i>=500)
	{
		i=0;
		P1 = Bit;
		Bit=Bit<<1;
		
		if (Bit >0x80)
		{
			Bit=0x1;
		}
	}
	else
		{
			i++;
		}
}

void timer_interrupt_3 () interrupt 3
{
		static int i=0;
		static short Bit= 0x1;
    TL1= TIMER1_L;  //0x00
    TH1= TIMER1_H;  //0xDC
    //loop for 100*10ms = 1000ms/1s
		
	if(i>=1000)
	{
		i=0;
		P2 = Bit;
		Bit=Bit<<1;
		
		if (Bit >0x80)
		{
			Bit=0x1;
		}
	}
	else
		{
			i++;
		}
}

void main()
{
		int i,j;
		short Bit;
		EA = 1;
    TMOD = 0x01;
    TH0 = TIMER0_H;  //0xDC
    TL0 = TIMER0_L;  //0x00
    ET0 = 1;
    TR0 = 1;    //start timer()

    TH1 = TIMER0_H;  //0xDC
    TL1 = TIMER0_L;  //0x00
    ET1 = 1;
    TR1 = 1;    //start timer()
	  
    while(1)
    {
			for(Bit = 0x1; Bit <=0x80; Bit=Bit<<1)
			{
				P0 = Bit;
				for(i=0; i<=0x7FF; i++)
				for(j=0; j<=0x7FF; j++);
			}
    }
}

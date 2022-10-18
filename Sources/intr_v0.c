#include <W78E052.h>
void myIsr_Ex0(void) interrupt 0
{
	int i,j;
	short Bit;
	for(Bit=0x1;Bit<=0x80; Bit=Bit<<1)
	{
		P0 = Bit;
		for(i=0;i<0x7FF;i++)
		for(j=0;j<0x7FF;j++);
	}
}

void myIsr_Ex1(void) interrupt 2
{
	int i,j;
	short Bit;
	for(Bit=0x1;Bit<=0x80; Bit=Bit<<1)
	{
		P1 = Bit;
		for(i=0;i<0x7FF;i++)
		for(j=0;j<0x7FF;j++);
	}
}
void main ()
{
	
	int i,j;
	short Bit;
	EX0 = 1;//En External interrupt 
	IT0 = 1;
	EX1 = 1;//En External interrupt 
	IT1 = 1; //1:Falling edge, 0:Level edge 
	PX1 = 1;
	EA = 1;  //En All.To chk interrupt if available
	
	while(1)
	{
		for(Bit=0x1;Bit<=0x80; Bit=Bit<<1)
	{
		P2 = Bit;
		for(i=0;i<0x7FF;i++)
		for(j=0;j<0x7FF;j++);
	}
}
}
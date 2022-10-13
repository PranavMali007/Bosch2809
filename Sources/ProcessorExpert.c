/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "trigger.h"

#include "BitsIoLdd1.h"
#include "segment7_CA.h"

#include "BitsIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
void mux(unsigned char,unsigned char,unsigned char,unsigned char);
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	int i,k,m,N;
	long int z;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization    .                    ***/
	int j;
	
	unsigned char acvar2[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};  
  
  /* Write your code here */
  /* For example: for(;;) { } */
	while(1)
	{
		for(i=0;i<6;i++)
		{
			for(k=0;k<10;k++)
			{
				for(j=0;j<6;j++)
				{
					for(m=0;m<10;m++)
					{
						for(n=0;n<100;n++)
							  						  	{
							  								
							  						  	
							mux(acvar2[i],acvar2[k],acvar2[j],acvar2[m]);
							//for(z=0;z<0xfffff;z++);
							  						  	}
					}
					
				}
		
			}
		}
	}
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

void mux(unsigned char c1,unsigned char c2,unsigned char c3,unsigned char c4)
{
	long int z,l=0xfff;
		trigger_PutVal(0xE);
		segment7_CA_PutVal(c1);
		for(z=0;z<l;z++);
		trigger_PutVal(0xD);
		segment7_CA_PutVal(c2);
		for(z=0;z<l;z++);
		trigger_PutVal(0xB);
		segment7_CA_PutVal(c3);
		for(z=0;z<l;z++);
		trigger_PutVal(0x7);
		segment7_CA_PutVal(c4);
		for(z=0;z<l;z++);
}                                                                             
/* END ProcessorExpert */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################

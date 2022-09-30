/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-09-27, 16:45, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Byte1.h"
#include "BitsIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
void waterfall();
void bouncing_LED();
void waterrise();

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */ 

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
	while(1)
	{
		
		waterfall();
		waterrise();
		bouncing_LED();
		
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
void waterrise()
{	

	int j,i;
	char a[8]={0x07, 0x0b, 0x0d, 0x0e, 0x8f, 0x4f, 0x2f, 0x1f};
	for(j=7; j>=0; j--)
		{
			Byte1_PutVal(a[j]);
			for(i=0;i<0xfffff;i++);
			 
		}	
}
void waterfall()
{	
	int s, i;
	char d[8]={0x07, 0x0b, 0x0d, 0x0e, 0x8f, 0x4f, 0x2f, 0x1f};
	for(s=0; s<8; s++)
		{
			Byte1_PutVal(d[s]);
			for(i=0;i<0xfffff;i++);
		 }
}



void bouncing_LED()
{
	int i,j,k;
	char a[8]={0x07, 0x0b, 0x0d, 0x0e, 0x8f, 0x4f, 0x2f, 0x1f};
	   
	for(k=8; k>=0; k--)
	{
		for(i=0; i<k; i++)
			{
			Byte1_PutVal(a[i]);
			for(j=0;j<0xfffff;j++);
			}
	}
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
*/

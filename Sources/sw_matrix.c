/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z32VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-12, 14:55, # CodeGen: 0
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
#include "row.h"
#include "BitsIoLdd1.h"
#include "col.h"
#include "BitsIoLdd2.h"
#include "CA_7seg.h"
#include "BitsIoLdd3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/
  unsigned char acvar2[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};
  unsigned int c1, c2;
  int i=0;
  /* Write your code here */
  /* For example: for(;;) { } */
  
  while(1)
  {
	  row_SetDir(1);
	  col_SetDir(1);
	  row_PutVal(0x0); 
	  col_PutVal(0xf);
	  col_SetDir(0);
	  c1=col_GetVal();
	  row_SetDir(1);
	  col_SetDir(1);
	  row_PutVal(0xf);
	  col_PutVal(0x0);
	  row_SetDir(0);
	  c2=row_GetVal();
	  

	  if (c1==0xe && c2==0xe)
	  {
		  i=0;
	  }
	  else if (c1==0xe && c2==0xd)
	  {
		  i=1;
	  }	  
	  else if (c1==0xe && c2==0xb)
	  {
		  i=2;
	  }
	  else if (c1==0xe && c2==0x7)
	  {
		  i=3;
	  }	
	  else if (c1==0xd && c2==0xe)
	  {
		  i=4;
	  }
	  else if (c1==0xd && c2==0xd)
	  {
		  i=5;
	  }	  
	  else if (c1==0xd && c2==0xb)
	  {
		  i=6;
	  }
	  else if (c1==0xd && c2==0x7)
	  {
		  i=7;
	  }	
	  else if (c1==0xb && c2==0xe)
	  {
		  i=8;
	  }
	  else if (c1==0xb && c2==0xd)
	  {
		  i=9;
	  }	  
	  else if (c1==0xb && c2==0xb)
	  {
		  i=10;
	  }
	  else if (c1==0xb && c2==0x7)
	  {
		  i=11;
	  }	  
	  else if (c1==0x7 && c2==0xe)
	  {
		  i=12;
	  }
	  else if (c1==0x7 && c2==0xd)
	  {
		  i=13;
	  }	  
	  else if (c1==0x7 && c2==0xb)
	  {
		  i=14;
	  }
	  else if (c1==0x7 && c2==0x7)
	  {
		  i=15;
	  }
	  else;
		  
	  CA_7seg_PutVal(acvar2[i]);
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

/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z32VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-11, 11:52, # CodeGen: 0
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

#include "BitIoLdd1.h"
#include "SW1.h"
#include "BitIoLdd2.h"
#include "SW2.h"
#include "BitIoLdd3.h"
#include "SW3.h"
#include "BitIoLdd4.h"
#include "SW4.h"

#include "Bits_CC.h"
#include "BitsIoLdd1.h"
#include "Bits_CA.h"
#include "BitsIoLdd2.h"
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
int i=0,j=0;
long int z;
unsigned char acvar1[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
unsigned char acvar2[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/
 
  /* Write your code here */
  /* For example: for(;;) { } */

Bits_CC_PutVal(acvar1[0]);
Bits_CA_PutVal(acvar2[0]);
while(1)
{
if(SW1_GetVal()==0)
{
if(j==10)
{
j=0;
Bits_CC_PutVal(acvar1[i++]);
}
Bits_CA_PutVal(acvar2[j++]);
for(z=0;z<0xfffff;z++);
}  

if(SW3_GetVal()==0)
{
if(j==-1)
{
j=0;
Bits_CC_PutVal(acvar1[i--]);

}
Bits_CA_PutVal(acvar2[j--]);
for(z=0;z<0xfffff;z++);
}

if(i==10)
{
i=0;

}
if(i==-1)
{
i=9;
}
if(j==-1)
{
j=9;
}

/**for(i=0;i<10;i++)
 {

 Bits_CC_PutVal(acvar1[i]);
 for(z=0;z<0xfffff;z++);

  for(j=0;j<10;j++)
  {
  if(SW1_GetVal()==0)
  {
  Bits_CA_PutVal(acvar2[j]);
  for(z=0;z<0xfffff;z++);
  }
  for(z=0;z<0xfffff;z++);
  }
 
 }**/
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
  
/**for(i=0;i<10;i++)
 {

 Bits_CC_PutVal(acvar1[i]);
 for(z=0;z<0xfffff;z++);

  for(j=0;j<10;j++)
  {
  if(SW1_GetVal()==0)
  {
  Bits_CA_PutVal(acvar2[j]);
  for(z=0;z<0xfffff;z++);
  }
  for(z=0;z<0xfffff;z++);
  }
 
 }**/
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

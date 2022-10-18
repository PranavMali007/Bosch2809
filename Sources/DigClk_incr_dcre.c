/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z32VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-12, 10:11, # CodeGen: 0
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
#include "trigger.h"
#include "BitsIoLdd3.h"
#include "BitsIoLdd1.h"
#include "TI1.h"
#include "TimerIntLdd1.h"
#include "TU1.h"
#include "SW1.h"
#include "BitIoLdd1.h"
#include "segment7_CA.h"
#include "SW2.h"
#include "BitIoLdd2.h"
#include "SW3.h"
#include "BitIoLdd3.h"
#include "SW4.h"
#include "BitIoLdd4.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
void mux(unsigned char,unsigned char,unsigned char,unsigned char);
void dig_run();
void dig_set();
int i,j,k,m,n,st=0;
unsigned char acvar2[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */


unsigned char acvar2[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
 
  dig_run();

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
void dig_set()
{
while(SW1_GetVal()!=0)
{
mux(acvar2[i],acvar2[k],acvar2[j],acvar2[m]);  
if(SW1_GetVal()==0)
{
st=0;
break;
}
if(SW4_GetVal()==0)
{
mux(acvar2[i],acvar2[k],acvar2[j],acvar2[m]);
if(m==9)
{
m=0;
if(j==5)
{
j=0;
if(k==9)
{
k=0;
if(i==5)
{
i=0;
break;
}
i++;
break;
}
k++;
break;
}
j++;
break;
}
m++;
break;
}
if(SW3_GetVal()==0)
{
mux(acvar2[i],acvar2[k],acvar2[j],acvar2[m]);
if(m==0)
{
m=9;
if(j==0)
{
j=5;
if(k==0)
{
k=9;
if(i==0)
{
i=5;
break;
}
i--;
break;
}
k--;
break;
}
j--;
break;
}
m--;
break;
}  
}
}
void dig_run()
{

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
 
  if(st==1 || SW2_GetVal()==0)
  {
  st=1;
  dig_set();
  }
 
  for(n=0;n<100;n++)
  {
 
  mux(acvar2[i],acvar2[k],acvar2[j],acvar2[m]);
  }
  }
  }
  }
  }
}
}
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
*/

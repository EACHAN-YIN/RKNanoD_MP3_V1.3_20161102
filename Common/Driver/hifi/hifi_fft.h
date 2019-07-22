/*
********************************************************************************************
*
*				  Copyright (c): 2014 - 2014 + 5, WJR
*							   All rights reserved.
*
* FileName: Cpu\NanoC\lib\hifi_fft.h
* Owner: WJR
* Date: 2014.11.28
* Time: 16:19:00
* Desc: 
* History:
*    <author>	 <date> 	  <time>	 <version>	   <Desc>
*    WJR     2014.11.28     16:19:00   1.0
********************************************************************************************
*/

#ifndef __CPU_NANOC_LIB_HIFI_FFT_H__
#define __CPU_NANOC_LIB_HIFI_FFT_H__

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #include define									 
*
*---------------------------------------------------------------------------------------------------------------------
*/

#define  ABS(x) ((x) > 0 ? (x) : -(x))


/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #define / #typedef define						 
*
*---------------------------------------------------------------------------------------------------------------------
*/
#define FFT_MODE_64                  (uint32)(0x0 << 29) 
#define FFT_MODE_128                 (uint32)(0x1 << 29) 
#define FFT_MODE_256                 (uint32)(0x2 << 29) 
#define FFT_MODE_512                 (uint32)(0x3 << 29) 
#define FFT_MODE_1024                (uint32)(0x4 << 29) 
#define IFFT_FLAG                    (uint32)((0x0 << 27)|(0x0 << 20)) 
#define FFT_FLAG                     (uint32)((0x1 << 27)|(0x1 << 20))

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   global variable declare							 
*
*---------------------------------------------------------------------------------------------------------------------
*/


/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API Declare          							 
*
*---------------------------------------------------------------------------------------------------------------------
*/
extern rk_err_t hifi_fft_shell(void );
extern rk_err_t FFT_Set_CFG(UINT32 HifiId,int mode,int type);



#endif


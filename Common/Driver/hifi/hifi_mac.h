/*
********************************************************************************************
*
*				  Copyright (c): 2014 - 2014 + 5, WJR
*							   All rights reserved.
*
* FileName: Cpu\NanoC\lib\hifi_mac .h
* Owner: WJR
* Date: 2014.11.28
* Time: 17:47:02
* Desc: 
* History:
*    <author>	 <date> 	  <time>	 <version>	   <Desc>
*    WJR     2014.11.28     17:47:02   1.0
********************************************************************************************
*/

#ifndef __CPU_NANOD_LIB_HIFI_MAC _H__
#define __CPU_NANOD_LIB_HIFI_MAC _H__

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #include define									 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #define / #typedef define						 
*
*---------------------------------------------------------------------------------------------------------------------
*/
#define MAC_DONE            (uint32)(0x1 << 5)
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
extern long long MAC_Get_result(UINT32 HifiId);
extern rk_err_t hifi_mac_shell(void);
extern rk_err_t MAC_Set_CFG(UINT32 HifiId,int order);



#endif


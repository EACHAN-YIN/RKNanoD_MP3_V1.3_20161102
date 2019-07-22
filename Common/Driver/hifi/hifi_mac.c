/*
********************************************************************************************
*
*                Copyright (c): 2014 - 2014 + 5, WJR
*                             All rights reserved.
*
* FileName: Cpu\NanoC\lib\hifi_mac .c
* Owner: WJR
* Date: 2014.11.28
* Time: 17:47:34
* Desc: 
* History:
*    <author>    <date>       <time>     <version>     <Desc>
*    WJR     2014.11.28     17:47:34   1.0
********************************************************************************************
*/

#include "SysInclude.h"
//#ifdef __CPU_NANOD_LIB_HIFI_MAC_C__

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #include define                                   
*
*---------------------------------------------------------------------------------------------------------------------
*/
#include "hifi.h"
#include "hifi_mac.h"
#include "Hw_hifi.h"


/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #define / #typedef define     					 
*
*---------------------------------------------------------------------------------------------------------------------
*/

#define _CPU_NANOD_LIB_HIFI_MAC_READ_  __attribute__((section("cpu_nanod_lib_hifi_mac _read")))
#define _CPU_NANOD_LIB_HIFI_MAC_WRITE_ __attribute__((section("cpu_nanod_lib_hifi_mac _write")))
#define _CPU_NANOD_LIB_HIFI_MAC_INIT_  __attribute__((section("cpu_nanod_lib_hifi_mac _init")))
#define _CPU_NANOD_LIB_HIFI_MAC_SHELL_  __attribute__((section("cpu_nanod_lib_hifi_mac _shell")))


/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local variable define     	     				 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   global variable define     	     				 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function declare     	     				 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API(read) define                    				 
*
*---------------------------------------------------------------------------------------------------------------------
*/
/*******************************************************************************
/*******************************************************************************
** Name: MAC_Get_result
** Input:UINT32 HifiId
** Return: rk_err_t
** Owner:WJR
** Date: 2014.12.3
** Time: 18:39:26
*******************************************************************************/
_CPU_NANOD_LIB_HIFI_MAC_READ_
READ API long long MAC_Get_result(UINT32 HifiId)
{
    long long res;
    int test_L,test_R;
    HIFIACC * pHifi = HifiPort(HifiId); 
    HIFITranData(&pHifi->MAC_RSH,&test_R,1);
    HIFITranData(&pHifi->MAC_RSL,&test_L,1);
    res = (test_R <<32)|(test_L);
  // printf("\n H:0x%x L:0x%x\n",test_R,test_L);
    return res;
}

/*******************************************************************************
** Name: MAC_Set_CFG
** Input:UINT32 HifiId,int order
** Return: rk_err_t
** Owner:WJR
** Date: 2014.11.28
** Time: 17:47:41
*******************************************************************************/
_CPU_NANOD_LIB_HIFI_MAC_READ_
READ API rk_err_t MAC_Set_CFG(UINT32 HifiId,int order)
{
    HIFIACC * pHifi = HifiPort(HifiId);
    pHifi->MAC_CFG = (order<<18); 
}



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function(read) define      				 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API(write) define                    			 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function(write) define         			 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API(init) define             	     			 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function(init) define              	  		 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API(shell) define              	  		 
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function(shell) define              	  		 
*
*---------------------------------------------------------------------------------------------------------------------
*/



//#endif


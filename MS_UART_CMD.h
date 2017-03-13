#ifndef MS_UART_CMD_H
#define MS_UART_CMD_H

#ifdef __cplusplus
extern "C"
{
#endif
/*******************************************************************************
 *                                            INCLUDES
 *******************************************************************************/
#include "OnBoard.h"
#include "hal_board.h"
#include "hal_defs.h"
#include "hal_types.h"
#include "hal_timer.h"
#include "hal_uart.h"

/*******************************************************************************
 *                                             MACROS
 *******************************************************************************/

/*******************************************************************************
 *                                            CONSTANTS
 *******************************************************************************/
#define				FREE_DATA_BFR_SIZE			20
/*******************************************************************************
 *                                             TYPEDEFS
 *******************************************************************************/

/*******************************************************************************
 *                                         GLOBAL VARIABLES
 *******************************************************************************/
extern bool FLAG_ECHO_SDATA;
extern bool FLAG_ECHO_RDATA;

extern char 	Free_Data[];
extern uint8 	Free_Data_Size;

/*******************************************************************************
 *                                          FUNCTIONS - API
 *******************************************************************************/
extern void ZCMD_ReplyCMD(void);

/*******************************************************************************
*******************************************************************************/


#ifdef __cplusplus
}
#endif

#endif

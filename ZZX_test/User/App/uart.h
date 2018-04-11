/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __UART_H
#define __UART_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"
#include "stm32f769i_eval.h"
#include "stdio.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* User can use this section to tailor USARTx/UARTx instance used and associated
   resources */
/* Definition for USARTx clock resources */
#define USARTx                           UART8
#define USARTx_CLK_ENABLE()              __UART8_CLK_ENABLE()
#define USARTx_RX_GPIO_CLK_ENABLE()      __GPIOE_CLK_ENABLE()
#define USARTx_TX_GPIO_CLK_ENABLE()      __GPIOE_CLK_ENABLE()

#define USARTx_FORCE_RESET()             __USART8_FORCE_RESET()
#define USARTx_RELEASE_RESET()           __USART8_RELEASE_RESET()

/* Definition for USARTx Pins */
#define USARTx_TX_PIN                    GPIO_PIN_1
#define USARTx_TX_GPIO_PORT              GPIOE
#define USARTx_TX_AF                     GPIO_AF8_UART8
#define USARTx_RX_PIN                    GPIO_PIN_0
#define USARTx_RX_GPIO_PORT              GPIOE
#define USARTx_RX_AF                     GPIO_AF8_UART8


/* Definition for USARTx's NVIC IRQ and IRQ Handlers */
#define USARTx_IRQn                      UART8_IRQn
#define USARTx_IRQHandler                UART8_IRQHandler


/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
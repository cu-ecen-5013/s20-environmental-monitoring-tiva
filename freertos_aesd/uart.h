/*
 * uart.h
 *
 *  Created on: Apr 17, 2020
 *      Author: Akshita Bhasin
 */

#ifndef UART_H_
#define UART_H_

#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"
#include "led_task.h"
#include "switch_task.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#include "timers.h"
#include "inc/hw_ints.h"
#include "driverlib/interrupt.h"

void ConfigureUART(void);
void Configure_TX(void);
void Configure_RX(void);
void UART_Transmit_ISR(void);
void UART_Receive_ISR(void);
void send_string(void);

#endif /* UART_H_ */

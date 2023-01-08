#ifndef UART_H
#define UART_H
#include<stdint.h>
#include "string.h"
#include "cli_command.h"
#include "get_temperature_ci.h"
void uart_handle(void);
void receive_data(uint8_t rx_data);
void uart_init(void);
#endif



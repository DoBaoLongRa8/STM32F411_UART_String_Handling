#include"uart.h"
#define UART_MAX_DATA_BUFF 100
static char uart_buff[UART_MAX_DATA_BUFF];
static uint8_t uart_len = 0;
static uint8_t uart_flag = 0;

void receive_data(uint8_t rx_data)
{
	if(rx_data == '\n') {
		
		uart_flag = 1;
		uart_buff[uart_len++] = '\0';
	}else {
		uart_buff[uart_len++] = rx_data;
	}
}	

void uart_handle(void)
{
	if(uart_flag == 1) {
		
		
		cli_command_excute(uart_buff, uart_len);
		
		uart_flag = 0;
		uart_len = 0;
	}
}
void uart_init(void)
{

}










	
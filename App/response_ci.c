#include "response_ci.h"
static UART_HandleTypeDef huart;
void response_print(const char* str, ...)
{
	char stringArray[100];
	
	va_list args;
	va_start(args, str);
	vsprintf(stringArray, str, args);
	va_end(args);
	
	HAL_UART_Transmit(&huart, (uint8_t*)stringArray, strlen(stringArray), 100);
}

void response_init(UART_HandleTypeDef huart_response)
{
	huart = huart_response;
}


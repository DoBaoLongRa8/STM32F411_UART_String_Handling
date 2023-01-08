#include "get_temperature_ci.h"
#include <stdlib.h>
#include "BME.h"
void getTemperature(char*argv[], uint8_t arg_num)
{
	if(arg_num > 2) {
		response_print("Invalid command, too many parameters (Expected number of parameters is 2)");
		return;
	}else if(arg_num < 2){
		response_print("Invalid command, not enough parameters (Expected number of parameters is 2)");
		return;
	}else {
		uint8_t channel = atoi(argv[1]);
		response_print("Channel %d temperature is %f degrees C", channel, BME_getTemperature(channel));
	}
}




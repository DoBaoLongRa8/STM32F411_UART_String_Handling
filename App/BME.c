#include<BME.h>

float BME_getTemperature(uint8_t channel)
{
	if(channel == 1)
		return 20.5;
	else if(channel == 2)
		return 45.5;
	else
		return -20;
}

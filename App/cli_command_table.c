#include "cli_command_table.h"

cli_command_info_t command_infor_getTem = 
{
	getTemperature, 
	"Read teperature from BME sensor"
};

cli_command_info_t command_infor_setTemMax = 
{
	setTemperatureMax, 
	"Set maximum threshold for temperature"
};


cli_command_entry_t command_entry_table[] = 
{
	{"getTemperature", &command_infor_getTem},
	{"setTemMax", &command_infor_setTemMax},
	{NULL, NULL}
};


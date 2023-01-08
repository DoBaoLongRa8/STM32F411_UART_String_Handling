#ifndef CLI_COMMAND_H
#define CLI_COMMAND_H
#include <string.h>
#include <stdint.h>
#include "get_temperature_ci.h"
#include "cli_command_table.h"
#include "cli_types.h"
void cli_command_excute(char buff[], uint8_t len);
#endif

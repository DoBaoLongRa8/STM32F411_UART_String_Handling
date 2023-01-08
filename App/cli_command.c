#include "cli_command.h"

extern cli_command_entry_t command_entry_table[];
cli_command_entry_t* p_cmd_entry;
static const cli_command_info_t* findCommand(char* commandName)
{
	p_cmd_entry = command_entry_table;
	while(p_cmd_entry->name != NULL) {
		if(strcmp(p_cmd_entry->name, commandName) == 0) {
			return p_cmd_entry->command_infor;
		}
		p_cmd_entry++;
	}
	return NULL;
}
void cli_command_excute(char uart_buff[], uint8_t len)
{
		char* argv[10];
		uint8_t arg_num = 0;
		
		char* p_str = strtok(uart_buff, " ");
		
		while(p_str != NULL) {
			argv[arg_num++] = p_str;
			p_str = strtok(NULL, " ");
		}
		const cli_command_info_t* cli_cm_if;
		if((cli_cm_if = findCommand(argv[0])) != NULL ) {
			cli_cm_if->function(argv, arg_num);
		}
}




#include "shell.h"

/*
 * receive_command - function that can parse the prompt
 * command: a string to receive input in the prompt
 */

void receive_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			edu_display("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			edu_display("Error while reading input. \n");
			exit(EXIT_FAILURE);
		}
	}
	command [strcspn(command, "\n")] = '\0';
}

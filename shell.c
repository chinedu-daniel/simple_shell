#include "shell.h"

/*
 * main - file to invoke the shell prompt
 * Return: (0)
 */

int main(void)
{
	char command[123];

	while (1)
	{
		show_prompt();
		receive_command(command, sizeof(command));
		perform_command(command);
	}

	return (0);
}

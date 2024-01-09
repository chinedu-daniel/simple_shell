#include "shell.h"

/**
 * main - This is the maain function where the execution of the program starts.
 * it is the entry point of the program
 * void: Empty string
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
		command_prompt(
	}

	char str[] = "";
	char *token = strtok(str, ",");

	while (token != NULL)
	{
		edu_display("\n");
		token = strtok(NULL, ",");
	}

	return (0);
}

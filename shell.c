#include "shell.h"

/**
 * main - This is the maain function where the execution of the program starts.
 * it is the entry point of the program
 * void: Empty string
 * Return: (0)
 */
int main(void)
{
	char str[] = "This is a string";
	const char delim[] = ",";
	char *token = strtok(str, delim);

	char command[123];

	while (1)
	{
		show_prompt();
		receive_command(command, sizeof(command));
		perform_command(command);
	}

	while (token != NULL)
	{
		printf("Token: %s\n", token);

		token = strtok(NULL, delim);
	}

	return (0);
}

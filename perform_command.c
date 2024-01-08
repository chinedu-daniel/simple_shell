#include "shell.h"

/*
 * perform_command - function to execute the prompt
 * command: a string to input the command in the prompt
 */

void perform_command(const char *command, char *const args[])
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execve(command, args, NULL);
		perror("Execution failed");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}

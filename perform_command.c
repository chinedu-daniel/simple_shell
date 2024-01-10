#include "shell.h"

/*
 * perform_command - function to execute the prompt
 * command: a string to input the command in the prompt
 */

int command_exists(const char *command);

int command_exists(const char *command)
{
	return access(command, X_OK) == 0;
}

void perform_command(char *command)
{
	pid_t child_pid;

	if (!command_exists(command))
	{
		printf("Command '%s' does not exist\n", command);
		return;
	}

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit (EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char **args = (char **)malloc(sizeof(char *) * 4);

		if (args == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}

		args[0] = (char *)command;
		args[1] = "arg1";
		args[2] = "arg2";
		args[3] = NULL;

		execve(command, args, NULL);

		perror("execve");
		free(args);
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}

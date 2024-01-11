#ifndef SHELL_H
#define SHELL_H

/*
 * Header file for this program
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/*
 * Prototypes for the simple shell
 */

void edu_display(const char *format);
void show_prompt(void);
void perform_command(char *command);
void receive_command(char *command, size_t size);

#endif /* SHELL_H */

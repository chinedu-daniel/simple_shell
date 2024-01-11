#include "shell.h"

/**
 * edu_display - the function for dispaying the prompt
 * @format: a pointer to a char
 */

void edu_display(const char *format)
{
	write(STDOUT_FILENO, format, strlen(format));
}

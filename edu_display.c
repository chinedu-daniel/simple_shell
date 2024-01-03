#include "shell.h"

void edu_display (const char *format)
{
	write(STDOUT_FILENO, format, strlen(format));
}

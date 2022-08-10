#include "main.h"

/**
 * exit_cmd - handle exit command
 * @command:
 * @line:
 * Return:
 */

void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}

#include "main.h"

/**
 * prompt_user - print $ to let user know program is ready
 * print prompt if shell is in interactive mode
 * Return: no return
 */

void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}

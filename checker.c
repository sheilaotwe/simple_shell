#include "main.h"

/**
 * checker - checks whether function is a built in
 * @cmd: token user input
 * @buf: fromgetline function
 * Return: 1 if cmd executed 0 if cmd is not executed
 */

int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}

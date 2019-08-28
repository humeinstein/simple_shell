#include "shell.h"

/**
 * exit_hsh - Exits from simple shell
 * @cmd: Inputted command
 *
 * Return: 0
 */
int exit_hsh(char **cmd)
{
	if (*cmd)
		exit(0);
	return (0);
}


/**
 * print_env - Print the environment
 * @cmd: cmd pointer
 *
 * Return: 0
 */

int print_env(char **cmd)
{
	int x;

	if (*cmd)
	{

		for (x = 0; environ[x]; x++)
		{
			write(1, environ[x], _strlen(environ[x]));
			write(1, "\n", 1);
		}
	}

	return (0);
}

/**
 * call_built - Check for builtin, then calls
 * @cmbn: full dir
 * @cmd: cmd input
 *
 * Return: path to builtin or process from dir
 */

int call_built(char *cmbn, char **cmd)
{
	int x;
	char *arr[] = {"exit", "env", NULL};

	typedef int (*Builtins)(char **);
	Builtins functions[] = {&exit_hsh, &print_env};

	for (x = 0; arr[x] != NULL; x++)
	{
		if (_strcmp(arr[x], cmd[0]) == 0)
			return (functions[x](cmd));
	}
	return (exec_cmd(cmbn, cmd));
}

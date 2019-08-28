#include "shell.h"

/**
 * environ1 - Writes the environment
 *
 * @env: Environment variable
 * Return: Nothing
 */

void environ1(char **env)

{
	int x;

	for (x = 0; env[x]; x++)
	{
		write(1, env[x], _strlen(env[x]));
		write(1, "\n", 1);
		x++;
	}
}

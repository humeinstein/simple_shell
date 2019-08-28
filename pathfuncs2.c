#include "shell.h"
​
/**
 * tokenize_Dir - Tokenizes directories
 * @env: Enviornment variable
 *
 * Return: buffer
 */
​
char **tokenize_Dir(char **env)
{
	char *tok;
	char *y;
	char **tok1;
​
	int x;
​
	y = environ_vars(env);
	tok1 = malloc(sizeof(char *) * 9);
	tok = strtok(y, " :");
	for (x = 0; tok != NULL; x++)
	{
		tok1[x] = tok;
		tok = strtok(NULL, " :");
	}
	tok1[x] = NULL;
	return (tok1);
}
​
/**
 * path_scan - Checks the path
 * @dir: directory tokens
 * @cmd: Entered command
 *
 * Return: NULL
 */
char *path_scan(char **dir, char *cmd)
{
	struct stat x;
	char *y;
​
	for (; *dir; dir++)
	{
		y = catcmddir(*dir, cmd);
		if (stat(y, &x) == 0)
			return (y);
	}
	return (NULL);
}

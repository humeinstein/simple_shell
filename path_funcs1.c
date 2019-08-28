#include "shell.h"

/**
 * catcmddir - Concatenates directory to command line
 * @dir: directory
 * @arg_val: argument value
 * Return: buff
 */

char *catcmddir(char *dir, char *arg_val)
{

	int v;
	int w;
	int len;
	int len1;
	char *buff;

	len = _strlen(dir);
	len1 = _strlen(arg_val);

	buff = malloc(sizeof(char) * len + len1 + 1);

	for (v = 0; v < len; v++)
	{
		buff[v] = dir[v];
	}

	for (w = 0; v < len + len1; v++, w++)
	{
		buff[v] = arg_val[w];
	}
	buff[v] = '\0';
	return (buff);
}

/**
 * environ_vars - Acquire environment variable
 * @env: - environment variable
 *
 * Return: buff
 */

char *environ_vars(char **env)
{
	int x;
	int y;
	int len;

	char *z;
	char *buff;

	char *str = "PATH";

	for (x = 0; env[x]; x++)
	{
		for (y = 0; env[x][y] == str[y]; y++)
		{
			if (env[x][y + 1] == str[y + 1])
			{
				z = env[x];
				break;
			}
		}
	}
	len = _strlen(z);
	buff = malloc(sizeof(char) * len + 1 + 8);

	x = 5;
	y = 0;
	while (z[x] != '\0')
	{
		if (z[x] == ':')
		{
			buff[y] = '/';
			y++;
		}
		buff[y] = z[x];
		x++;
		y++;
	}
	buff[y] = '/';
	y++;
	buff[y] = '\0';
	return (buff);
}

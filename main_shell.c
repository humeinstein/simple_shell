#include "shell.h"

/**
 * shell_init - function with no arguments
 * @env: Environment Variable
 * Return: Nothing
 */
void shell_init(char **env)
{
	char *line;
	char *cmbn;

	char **dir;
	char **cmd;

	while (1)
	{
		prompt();
		line = get_line();
		if (line[0] == '\n')
		{
			free(line);
			continue;
		}
		cmd = line_token(line);
		dir = tokenize_Dir(env);
		cmbn = path_scan(dir, cmd[0]);
		call_built(cmbn, cmd);
		if (!cmbn)
			perror(cmbn);

	}
	free(line);
	free(cmd);
	free(dir);
	free(cmbn);

}

/**
 * main - primary function with no args
 * @argc: - int argc
 * @argv: - content
 * @env: - environment
 * Description: initiate looper function
 * Return: 0 for success
 */

int main(int argc, char **argv, char **env)
{
	if (argc == 1 || argv[1] == NULL)
		shell_init(env);

	return (0);
}

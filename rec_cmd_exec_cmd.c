#include "shell.h"

/**
 * get_line - Get the line from prompt
 *
 * Return: buffer
 */

char *get_line(void)

{
	char *buff = NULL;
	size_t buff_size = 0;
	int prompt;

	prompt = getline(&buff, &buff_size, stdin);

	if (prompt == EOF)
	{
		if(isatty(STDIN_FILENO))
			write(STDIN_FILENO, "\n", 1);
		_exit(0);
	}
	return (buff);
}

/**
 * line_token - Tokenize line
 * @line: cmd input
 *
 * Return: tok
 */

char **line_token(char *line)

{
	char *buff;
	char *t_w;
	char *t_y;
	char **t_z;
	int x;

	buff = _strdup(line);
	t_w = strtok(line, DELIM);

	for (x = 1; t_w; x++)
	{
		t_w = strtok(NULL, DELIM);
	}

	free(line);
	t_z = malloc(sizeof(char *) * x + 1);
	t_y = strtok(buff, DELIM);

	for (x = 0; t_y; x++)
	{
		t_z[x] = t_y;
		t_y = strtok(NULL, DELIM);
	}

	t_z[x] = '\0';

	return (t_z);
}


/**
 * exec_cmd - Executes entered command
 * @cmdpath: The directory with command
 * @command: inputted command
 *
 * Return: prog
 */

int exec_cmd(char *cmdpath, char **command)

{
	pid_t child;
	int prog = 0;

	child = fork();

	if (child == 0)
	{
		prog = execve(cmdpath, command, NULL);
		exit(prog);
	}

	else
		wait(NULL);

	return (prog);
}

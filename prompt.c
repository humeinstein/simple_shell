#include "shell.h"
/**
 * prompt - function to print prompt
 *
 * Description: Print ps1 prompt
 * Return: Nothing
 */
void prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(STDERR_FILENO, "$ ", 2);
}

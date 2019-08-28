#include "shell.h"
/**
 * prompt - function to print prompt
 *
 * Description: Print ps1 prompt
 * Return: Nothing
 */
void prompt(void)
{
	write(1, "$ ", 3);
}

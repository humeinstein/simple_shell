#include "shell.h"

/**
 * _strlen - Determines length of a string
 *@s: The string
 *
 * Return: i
 */

int _strlen(char *s)

{
	int x;

	for (x = 0; *s != '\0'; ++x)
	{
		s++;
	}

	return (x);
}

/**
 * _strcmp - compares a string
 * @s1: One of the strings to compare
 * @s2: The other string
 *
 * Return: z
 */

int _strcmp(char *s1, char *s2)

{
	char *x = s1;
	char *y = s2;

	for (; *x != '\0'; x++, y++)
	{
		if (*x != *y)
		{
			return (*x - *y);
		}

	}

	return (0);
}

/**
 * _strdup - Returns a pointer to a copy of a string
 * @str: The copied string
 *
 * Return: NULL or pointer to new string
 */

char *_strdup(char *str)

{
	int x;
	int y;
	char *newstr;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	x++;
	newstr = malloc(sizeof(char) * (x + 1));

	if (newstr == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
	{
		newstr[y] = str[y];
	}
	newstr[y] = '\0';
	return (newstr);
}

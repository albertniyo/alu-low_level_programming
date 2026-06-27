#include "main.h"

/**
 * _strlen - funcs to return the length of the string
 * @s: pointer to our string to count its len
 *
 * Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

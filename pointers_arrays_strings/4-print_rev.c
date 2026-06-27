#include "main.h"

/**
 * print_rev - funcs that print a string in reverse format
 * @s: pointer to our string for reverse printing
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - funcs that print a string with new line automatically
 * @str: pointer to our string to count its len
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}

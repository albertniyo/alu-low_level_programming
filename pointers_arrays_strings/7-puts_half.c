#include "main.h"

/**
 * puts_half - prints a half of a string
 * @str: The input string
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	int n;
	int t;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		t = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
		t = len - n;
	}

	while (str[t] != '\0')
	{
		_putchar(str[t]);
		t++;
	}
	_putchar('\n');
}

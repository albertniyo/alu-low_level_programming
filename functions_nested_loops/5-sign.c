#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: the number to check
 *
 * Return: if n > 0 print + and return 1, for n == 0 prints '0' and return 0, else prints '-' and return -1
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

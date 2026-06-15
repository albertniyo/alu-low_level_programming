#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: number to get the last digit
 *
 * Return: last digit of c
 */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}

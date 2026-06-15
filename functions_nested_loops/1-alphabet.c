#include "main.h"

/**
 * print_alphabet - printing lowercase letter
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ltr = 'a';

	while (ltr <= 'z')
	{
		_putchar(ltr);
		ltr++;
	}
	_putchar('\n');
}

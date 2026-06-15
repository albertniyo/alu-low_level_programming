#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times lowercase alphabet with new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ltr = 'a';

		while (ltr <= 'z')
		{
			_putchar(ltr);
			ltr++;
		}
		_putchar('\n');
	}
}

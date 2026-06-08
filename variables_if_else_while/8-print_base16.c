#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char nber = '0';
	char ltr = 'a';

	while (nber <= '9')
	{
		putchar(nber);
		nber++;
	}

	while (ltr <= 'f')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');

	return (0);
}

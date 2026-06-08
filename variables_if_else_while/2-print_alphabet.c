#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char ltr = 'a';

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char ltr = 'a';
	char LTR = 'A';

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}
	while (LTR <= 'Z')
	{
		putchar(LTR);
		ltr++;
	}
	putchar('\n');

	return (0);
}

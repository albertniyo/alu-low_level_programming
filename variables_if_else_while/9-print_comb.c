#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int nber;

	nber = 48;
	while (nber <= 57)
	{
		putchar(nber);
		if (nber != 57)
		{
			putchar(',');
			putchar(' ');
		}
		nber++;
	}
	putchar('\n');

	return (0);
}

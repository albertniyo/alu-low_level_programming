#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int nber;

	nber = '0';
	while (nber <= '9')
	{
		putchar(nber);
		nber++;
	}
	putchar('\n');

	return (0);
}

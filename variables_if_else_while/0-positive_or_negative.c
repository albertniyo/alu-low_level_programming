#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_Max / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		prinf("%d is zero", n);
	}
	return (0);
}

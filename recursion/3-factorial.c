#include "main.h"

/**
 * factorial - implement factorial of a given number
 * @n: integer argument
 *
 * Return: factorial result of argument n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

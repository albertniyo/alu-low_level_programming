#include "main.h"

/**
 * check_prime - helper function that recursively checks for odd divisors
 * @n: integer argument to evaluate
 * @div: current odd divisor for test
 *
 * Return: 1 if n is prime, otherwise 0
 */
int check_prime(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (check_prime(n, div + 2));
}

/**
 * is_prime_number - checks whether an integer is a prime number
 * @n: integer argument to evaluate
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (check_prime(n, 3));
}

#include "main.h"

/**
 * find_sqrt - helper function that recursively checks for the square root
 * @n: integer argument
 * @rt: current rt value to test
 *
 * Return: natural square rt, or -1 if it does not exist.
 */
int find_sqrt(int n, int rt)
{
	if (rt * rt == n)
	{
		return (rt);
	}
	if (rt * rt > n)
	{
		return (-1);
	}
	return (find_sqrt(n, rt + 1));
}


/**
 * _sqrt_recursion - returns the natural sqrt of  number.
 * @n: integer argument
 *
 * Return: natural square root, or -1 .
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}

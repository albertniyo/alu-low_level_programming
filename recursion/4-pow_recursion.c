#include "main.h"

/**
 * _pow_recursion - implement power of two given numbers x and y
 * @x: integer argument x
 * @y: integer argument y
 *
 * Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}

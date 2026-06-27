#include "main.h"

/**
 * swap_int - swap two ints using pointers.
 * @a: pointer to int a
 * @b: pointer to int b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

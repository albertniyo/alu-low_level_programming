#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array via comparison function
 * @array: pointer to the array of ints
 * @size: elt in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: idx of the first matching element, or -1 if no match or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

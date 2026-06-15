#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98 (upward or downward)
 * @c: starting number
 *
 * Return: void
 */
void print_to_98(int c)
{
	int i;

	if (c <= 98)
	{
		for (i = c; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = c; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}

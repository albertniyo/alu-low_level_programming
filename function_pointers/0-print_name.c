#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer callback
 * @name: string to print
 * @f: pointer to the function used
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

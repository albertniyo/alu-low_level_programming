#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: function parameter
 *
 * Return: 1 for letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * rev_string - funcs that reverse our string
 * @s: pointer to our string to reverse printing
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0;
	int i;
	int temp;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}

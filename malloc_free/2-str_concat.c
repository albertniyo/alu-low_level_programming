#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a new string
 * @s1: first string argument
 * @s2: second string argument
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0;
	int l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	concat = malloc(sizeof(char) * (l1 + l2 + 1));

	if (concat == NULL)
		return (NULL);

	while (i < l1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (j < l2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';

	return (concat);
}

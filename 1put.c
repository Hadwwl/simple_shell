#include "ashell.h"

/**
 * str_cmp - compares 2 strings
 * @one: first string
 * @two: second string
 * Return: integer
 */
int str_cmp(char *one, char *two)
{
	int i = 0;
	int n;

	for (n = 0 ; *(one + n) != '\0' && *(two + n) != '\0' ; n++)
	{
		if (*(one + n) != *(two + n))
		{
			i = (int)*(one + n) - (int)*(two + n);
			break;
		}
	}
	return (i);
}
/**
 * str_dup - duplicate string pointed by src
 * @string: string
 * Return: character ponter to new copy
 */
char *str_dup(char *string)
{
	char *c;
	unsigned int n;
	unsigned int sz;

	if (string == NULL)
	{
		return (NULL);
	}
	sz = strlen(string);

	c = malloc(sz * sizeof(*string) + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0 ; *(string + n) != '\0' ; n++)
		{
			*(c + n) = *(string + n);
		}
	}
	return (c);
}

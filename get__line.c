#include "ashell.h"

/**
 * get__ - get the command line
 * Return: command line
 */
char *get__(void)
{
	char *l = NULL;
	int n;
	int k;
	size_t sz;

	sz = 0;

	if (getline(&l, &sz, stdin) == -1)
	{
		free(l);
		return (NULL);
	}
	n = 0;

	while (1)
	{
		k = l[n];
		if (k == '\n')
		{
			l[n] = '\0';
			return (l);
		}
		if (k == EOF)
		{
			exit(EXIT_SUCCESS);
		}
		n++;
	}
	return (l);
}

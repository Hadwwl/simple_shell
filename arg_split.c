#include "ashell.h"

/**
 * argu_split - splits argument command
 * @l: command line
 * Return: tokens
 */
char **argu_split(char *l)
{
	char *t = NULL;
	char **ts = NULL;
	int love = 0;
	size_t n, k;

	for (n = 0 ; l[n] != '\0' ; n++)
	{
		if (l[n] == ' ')
		{
			love++;
		}
	}
	if ((love + 1) == str_len(l))
	{
		return (NULL);
	}
	ts = (char **)malloc(sizeof(char *) * (love + 2));

	if (ts == NULL)
	{
		return (NULL);
	}
	t = strtok(l, " \t\r");
	k = 0;

	while (t != NULL)
	{
		ts[k] = t;
		k++;
		t = strtok(NULL, " \t\r");
	}
	ts[k] = NULL;
	return (ts);
}

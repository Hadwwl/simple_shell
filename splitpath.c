#include "ashell.h"

/**
 * sp_path - splits the path line
 * @envt: environment
 * Return: splited path
 */
char **sp_path(char **envt)
{
	char *l;
	char *t = NULL;
	char **ts = NULL;
	size_t n, k;
	int love = 0;

	l = path_(envt);
	for (n = 0 ; l[n] != '\0' ; n++)
	{
		if (l[n] == ':')
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
	t = strtok(l, ":");
	k = 0;

	while (t != NULL)
	{
		ts[k] = t;
		k++;
		t = strtok(NULL, ":");
	}
	ts[k] = NULL;
	return (ts);
}

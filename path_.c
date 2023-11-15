#include "ashell.h"

/**
 * path_ - function to get path
 * @envt: pointer to pointer of envt
 * Return: path
 */
char *path_(char **envt)
{
	size_t i = 0;
	size_t mk = 0;
	size_t love = 5;
	char *p = NULL;

	for (i = 0 ; strn_cmp(envt[i], "PATH=", 5) ; i++)
	{
	}
	if (envt[i] == NULL)
	{
		return (NULL);
	}
	for (love = 5 ; envt[i][mk] ; mk++, love++)
	{
	}
	p = malloc(sizeof(char) * (love + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (mk = 5, love = 0 ; envt[i][mk] ; mk++, love++)
	{
		p[love] = envt[i][mk];
	}
	p[love] = '\0';
	return (p);
}

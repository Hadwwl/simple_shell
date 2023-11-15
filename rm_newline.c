#include "ashell.h"

/**
 * rm_newline - removes newline
 * @string: string
 */
void rm_newline(char *string)
{
	int n = 0;

	while (string[n] != '\0')
	{
		if (string[n] == '\n')
		{
			break;
		}
		n++;
	}
	string[n] = '\0';
}
/**
 * empty_command - enter empty command line
 * @c: command
 * Return: 1 or 0 on success
 */
int empty_command(char *c)
{
	int n, k;
	int s = 0;

	for (n = 0 ; c[n] != '\0' ; n++)
	{
		if (str_cmp(c, "\n") == 0)
		{
			return (1);
		}
		rm_newline(c);
		k = str_len(c);
		if (c[n] == ' ')
		{
			s++;
		}
		if (s == k)
		{
			return (1);
		}
	}
	return (0);
}
/**
 * which_path - shows which path
 * @argu: pointer to argument
 * Return: 1, 2 or 0 on succes
 */
int which_path(char *argu)
{
	int n, km;

	for (n = 0 ; argu[n] != '\0' ; n++)
	{
		if (argu[n] == '/')
		{
			km = access(argu, F_OK);
			if (km == -1)
			{
				return (1);
			}
			else
			{
				return (2);
			}
		}
	}
	return (0);
}

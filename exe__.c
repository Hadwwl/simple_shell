#include "ashell.h"

/**
 * exec_l - execute command
 * @argu: arguments
 * @p: path
 * @envt: environment
 * Return: 0 success
 */
int exec_l(char **argu, char *p, char **envt)
{
	int s;
	int i;
	pid_t chpr;

	chpr = fork();

	if (chpr == -1)
	{
		exit(EXIT_FAILURE);
	}
	else if (chpr == 0)
	{
		i = execve(p, argu, envt);

		if (i == -1)
		{
			perror("error execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (waitpid(chpr, &s, 0) == -1)
		{
			perror("waiting pid");
		}
	}
	return (0);
}

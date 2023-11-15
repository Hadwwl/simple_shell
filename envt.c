#include "ashell.h"

/**
 * write_envt - writes the environmet
 * @envt: pointer to pointer of envt
 */

void write_envt(char **envt)
{
	size_t i = 0;

	while (envt[i])
	{
		write(STDOUT_FILENO, envt[i], str_len(envt[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

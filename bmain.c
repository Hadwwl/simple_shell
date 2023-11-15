#include "ashell.h"

/**
 * main - main function
 * @arc: count
 * @arv: victor
 * @envt: environ
 * Return: success
 */
int main(int arc, char **arv, char **envt)
{
	int s;
	char *command = NULL, **ts = NULL, **p = NULL, *mk = NULL;

	(void)arc, (void)arv;
	while (1)
	{	show_prompt();
		command = get__();
		if (command == NULL)
			return (0);
		if (command)
		{	ts = argu_split(command);
			if (ts == NULL)
				return (0);
			if (str_cmp(ts[0], "exit") == 0)
			{	free(command);
				free(ts);
				exit(EXIT_SUCCESS); }
			if (str_cmp(ts[0], "envt") == 0)
				write_envt(envt);
			else
			{	s = which_path(ts[0]);
				mk = ts[0];
				if (s == 0)
				{		p = sp_path(envt);
						mk = path_way(ts[0], p); }
				if (s == 1 || (s == 0 && str_cmp(mk, "0") == 0))
					putme("not found");
				else if (s == 2 || (s == 0 && str_cmp(mk, "0") != 0))
					exec_l(ts, mk, envt);
				free(command);
				free(ts);
			}}
		else
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(EXIT_SUCCESS);
		}}
	return (EXIT_SUCCESS);
}

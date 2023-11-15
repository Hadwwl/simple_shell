#include "ashell.h"

/**
 * path_way - searchs and finds file in which directory
 * @k: char
 * @path: every possible path
 * Return: dirent path
 */
char *path_way(char *k, char **path)
{
	int n;
	int f = 0;
	char *dpath = NULL;
	DIR *ind_dir = NULL;
	struct dirent *s = NULL;

	for (n = 0 ; path[n] != NULL ; n++)
	{
		ind_dir = opendir(path[n]);

		if (ind_dir == NULL)
			return (NULL);
		while ((s = readdir(ind_dir)) != NULL)
		{
			if (s->d_type == DT_REG && str_cmp(s->d_name, k) == 0)
			{
				dpath = malloc(str_len(path[n]) + str_len(k) + 2);
				if (dpath == NULL)
				{
					closedir(ind_dir);
					return (NULL);
				}
				str_cpy(dpath, path[n]);
				str_cat(dpath, "/");
				str_cat(dpath, k);
				f = 1;
				break;
			}
		}
		if (f == 1)
			break;
	}
	if (path[n] == NULL)
	{
		closedir(ind_dir);
		return ("0");
	}
	closedir(ind_dir);
	return (dpath);
}

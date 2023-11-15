#include "ashell.h"

/**
 * strn_cmp - compares strings based on ASCII
 * @one: string 1
 * @two: string 2
 * @k: int
 * Return: 0 sucess
 */
size_t strn_cmp(char *one, char *two, size_t k)
{
	size_t n;
	size_t t;

	for (n = 0 ; one[n] != '\0' && n < k ; n++)
	{
		t = one[n] - two[n];
		if (t != 0)
		{
			return (t);
		}
	}
	return (0);
}

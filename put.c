#include "ashell.h"

/**
 * _putchar - write char to the stdout
 * @h: character to be printed
 * Return: 1 success or -1 on error
 */
int _putchar(char h)
{
	return (write(1, &h, 1));
}

/**
 * putme - function to write strings
 * @string: string to be written
 */
void putme(char *string)
{
	int i;

	for (i = 0 ; *(string + i) != '\0' ; i++)
		_putchar(*(string + i));
}
/**
 * str_len - string length
 * @c: chae
 * Return: integer
 */
int str_len(char *c)
{
	int i = 0;
	int n;

	for (n = 0 ; *(c + n) != '\0' ; n++)
	{
		i++;
	}
	return (i);
}
/**
 * str_cpy - copys string array
 * @one: first string
 * @two: second string
 * Return: copies string
 */
char *str_cpy(char *one, char *two)
{
	int n;

	for (n = 0 ; *(two + n) != '\0' ; n++)
	{
		*(one + n) = *(two + n);
	}
	*(one + n) = '\0';

	return (one);
}
/**
 * str_cat - concatenates two strings
 * @one: first string
 * @two: second string
 * Return: string
 */
char *str_cat(char *one, char *two)
{
	int i;
	int n;

	for (i = 0 ; *(one + i) != '\0' ; i++)
	{
	}
	for (n = 0 ; *(two + n) != '\0' ; n++)
	{
		*(one + i + n) = *(two + n);
	}
	*(one + i + n) = '\0';

	return (one);
}

#include "ashell.h"

/**
 * show_prompt - shows the prompt
 */
void show_prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(1, "$ ", 2);
	}
}

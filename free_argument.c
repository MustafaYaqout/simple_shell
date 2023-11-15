#include "main.h"

/**
 * freeArguments - Frees memory allocated for command arguments.
 * @arguments: The array of command arguments.
 *
 * Frees each argument and the array itself by iterating through the array.
 *
 * @arguments: The array of command arguments.
 */

void freeArguments(char **arguments)
{
	int i = 0;

	while (arguments[i] != NULL)
	{
		free(arguments[i]);
		++i;
	}
	free(arguments);
}

#include "main.h"

/**
 * Removes extra spaces at the end of a string.
 *
 * @param str: The string to be modified.
 */

void removeTrailingSpaces(char *str)
{
	int i = strlen(str) - 1;

	/* Move backward to find the first non-space character */
	while (i >= 0 && str[i] == ' ')
	{
		i--;
	}

	/* Null-terminate the string at the last non-space character */
	str[i + 1] = '\0';
}

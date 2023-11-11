#include "main.h"

/**
 * copyFunction - Copy elements from source to dest.
 * @dest: The destination string.
 * @source: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, const char *source)
{
	while (*source != '\0')
	{
		*dest = *source;
		source++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

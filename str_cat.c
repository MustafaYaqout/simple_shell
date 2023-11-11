#include "main.h"

/**
 * _strcat - function to concatenate two strings
 *
 * @dest: pointer to string (destination)
 * @src: pointer to string (source)
 *
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

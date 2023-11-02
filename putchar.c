#include "main.h"

/**
 * _putchar - write the char to standard output
 * @c: character to be printed
 *
 * Return: 1 (on success)
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * i_atoi - Convert a string to an integer.
 * @s: The input string to convert.
 *
 * This function converts a string to an integer. It skips leading whitespace,
 * handles an optional sign (+/-), and then processes the numeric characters.
 * If the string is empty or contains non-numeric characters, the behavior is
 * undefined.
 *
 * Return: The converted integer.
 */

int i_atoi(char *s)
{
	int end = 0;
	int negati = 1;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}
	if (*s == '-')
	{
		negati = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		end = end * 10 + (*s - '0');
		s++;
	}
	return (negati * end);
}

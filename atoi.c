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
	int result = 0;
	int negative = 1;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}
	if (*s == '-')
	{
		negative = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (negative * result);
}

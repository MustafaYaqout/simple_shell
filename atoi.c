#include "main.h"

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

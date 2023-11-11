#include "main.h"

/**
 * print_env - This entry point
 *
 * Description: env built-in function
 * that prints environment variables
 *
 * Return: void - Nothing
 */
void print_env(void)
{
	int i = 0;
	int j = 0;

	while (environ[i])
	{
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}

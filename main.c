#include "main.h"

/**
 * main - Entry point of the shell program.
 *
 * This function handles user input, command execution, and memory management.
 *
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 * @envp: Array of environment variables.
 *
 * Return: 0 on successful execution, otherwise appropriate error code.
 */

int main(int argc, char *argv[], char *envp[])
{
	char *lineptr = NULL;
	char **arguments = NULL;
	int i;

	(void)argc;
	(void)argv;
	(void)envp;

	while (1)
	{
		lineptr = readUserInput();
		arguments = parse_cmd(lineptr);

		if (arguments == NULL)
		{

			free(lineptr);
			return (1);
		}

		ExecuteCommand(arguments);
		for (i = 0; arguments[i] != NULL; i++)
		{
			free(arguments[i]);
		}
		free(arguments);
	}

	free(lineptr);
	return (0);
}

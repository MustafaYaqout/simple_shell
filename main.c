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
	size_t n = 0;
	ssize_t nchars_read;
	char **arguments = NULL;
	int i;
	(void)argc;
	(void)argv;
	(void)envp;
	while (1)
	{
		nchars_read = getline(&lineptr, &n, stdin);
		if (nchars_read == -1)
		{
			free(lineptr);
			return (0);
		}
		if (nchars_read > 0 && lineptr[nchars_read - 1] == '\n')
		{
			lineptr[nchars_read - 1] = '\0';
		}
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

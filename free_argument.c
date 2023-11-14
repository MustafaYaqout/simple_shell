#include "main.h"

void displayPrompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
void freeArguments(char **arguments, int argc)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
	free(arguments[i]);
	}
	free(arguments);
}
void handleExit(char **arguments, int argc)
{
	int exitCode = 0;

	if (argc > 1)
	{
	    exitCode = i_atoi(arguments[1]);
	}
	freeArguments(arguments, argc);
	exit(exitCode);
}

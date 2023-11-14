#include "main.h"

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

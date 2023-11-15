#include "main.h"

/**
 * Exit_Shell - Exits the program with a specified status code.
 * @arguments: Array of command arguments.
 *
 * Terminates the program immediately, converting the second argument
 * (if present) to an integer using atoi as the exit code. Frees memory
 * allocated for the arguments and exits the program with the exit code.
 *
 * @param arguments: Array of command arguments.
 */

void Exit_Shell(char **arguments)
{
	int exitCode = 0;

	if (arguments[1] != NULL)
	{
		exitCode = atoi(arguments[1]);
	}
	freeArguments(arguments);
	exit(exitCode);
}

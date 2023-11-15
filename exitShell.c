#include "main.h"

/**
 * Exit_Shell - Exits the program with a specified status code.
 * @arguments: The array of command arguments.
 *
 * This function terminates the program immediately.
 * It checks if there is a
 * second argument in the array,
 * representing the exit status code. If present,
 * it converts the argument to an integer using atoi
 * and sets it as the exit code.
 * Then, it frees the memory allocated
 * for the arguments and exits the program
 * with the determined exit code.
 *
 * @arguments: The array of command arguments.
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

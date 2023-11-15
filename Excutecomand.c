#include "main.h"

/**
 * ExecuteCommand - Execute the command based on user input.
 * @arguments: The array of command arguments.
 *
 * This function takes a null-terminated array of strings as input,
 * where the first string is the command to execute, and the subsequent
 * strings are its arguments.
 */

void ExecuteCommand(char **arguments)
{
	if (arguments[0] != NULL)
	{
		if (_strcmp(arguments[0], "exit") == 0)
		{
			Exit_Shell(arguments);
		} else if (_strcmp(arguments[0], "env") == 0)
		{
			print_env();
		} else
		{
			execvFunction(arguments[0], arguments);
		}
	}
}

#include "main.h"

/**
 * ExecuteCommand - Execute the command based on user input.
 *
 * @param arguments - The array of command arguments.
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

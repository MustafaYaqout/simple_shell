#include "main.h"

/**
 * HandleError - Display error message, free allocated memory, and exit with
 * failure status.
 *
 * @param message - The error message to display.
 * @param arguments - The dynamically allocated memory to free.
 */

void HandleError(const char *message, char **arguments)
{
	perror(message);
	freeArguments(arguments);
	exit(EXIT_FAILURE);
}

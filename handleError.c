#include "main.h"

/**
 * HandleError - Displays an error message, frees allocated memory, and exits.
 *
 * @param message - Error message to display.
 * @param arguments - Memory to free.
 */

void HandleError(const char *message, char **arguments)
{
	perror(message);
	freeArguments(arguments);
	exit(EXIT_FAILURE);
}

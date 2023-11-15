#include "main.h"

/**
 * HandleError - Displays an error message, frees allocated memory, and exits.
 *
 * @param message - Pointer to a constant character (string) representing the error message.
 * @param arguments - Pointer to a pointer to a character, assumed to be an array of strings (or an array of pointers to characters).
 */

void HandleError(const char *message, char **arguments)
{
	perror(message);
	freeArguments(arguments);
	exit(EXIT_FAILURE);
}

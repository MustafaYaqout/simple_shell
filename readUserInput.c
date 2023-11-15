#include "main.h"

/**
 * Read a line of input from the user.
 *
 * This function reads a line of input from the standard input (stdin).
 * It dynamically allocates memory to store the input string, and it
 * adjusts the string to remove the newline character at the end, if present.
 *
 * @return A dynamically allocated string containing the user's input.
 *         The caller is responsible for freeing the allocated memory.
 */
char *readUserInput(void)
{
char *lineptr = NULL;
size_t n = 0;
ssize_t nchars_read;

nchars_read = getline(&lineptr, &n, stdin);

if (nchars_read == -1)
{
free(lineptr);
return (NULL);
}

if (nchars_read > 0 && lineptr[nchars_read - 1] == '\n')
{
lineptr[nchars_read - 1] = '\0';
}

return (lineptr);
}

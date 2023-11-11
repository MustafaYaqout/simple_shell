#include "main.h"

/**
 * main - The main function of the shell program.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 * @envp: An array of environment variables.
 *
 * Return: Always 0.
 */
int main(int argc, char *envp[])
{
    char *lineptr = NULL;
    size_t n = 0;
    ssize_t nchars_read;
    char **arguments;

    (void)envp;

    while (1) {
        displayPrompt();
        nchars_read = getline(&lineptr, &n, stdin);

        if (nchars_read == -1) {
            free(lineptr);
            return 0;
        }

        if (nchars_read > 0 && lineptr[nchars_read - 1] == '\n') {
            lineptr[nchars_read - 1] = '\0';
        }

        arguments = malloc(sizeof(char *) * (nchars_read + 1));
	if (arguments == NULL) {
        perror("Error: Memory allocation failed");
        exit(EXIT_FAILURE);
	}
        parseInput(lineptr, arguments);

        if (argc > 0) {
            if (_strcmp(arguments[0], "exit") == 0) {
                handleExit(arguments, argc);
            } else if (_strcmp(arguments[0], "env") == 0) {
                print_env();
            } else {
                execvFunction(arguments[0], arguments);
		perror("Error: execv failed");
		exit(EXIT_FAILURE);
            }
        }

        freeArguments(arguments, argc);
    }

    free(lineptr);
    return 0;
}

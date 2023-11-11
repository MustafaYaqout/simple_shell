#include "main.h"

/**
 * parseInput - Parse input into an array of tokens
 * @input: The input string to parse
 * @argv: An array to store the parsed tokens
 * @return: The number of tokens in argv, or -1 if memory allocation fails
 */
int parseInput(char *input, char **argv) {
    char *delim = " ";
    char *token = strtok(input, delim);
    int argc = 0;
    int i = 0;

    while (token != NULL) {
        argv[argc] = strdup(token);
        if (argv[argc] == NULL) {
            for (i = 0; i < argc; i++) {
                free(argv[i]);
            }
            return -1;
        }
        token = strtok(NULL, delim);
        argc++;
    }

    if (argc > 0) {
        removeTrailingSpaces(argv[argc - 1]);
    }

    argv[argc] = NULL;
    return argc;
}

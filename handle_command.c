#include "main.h"

/**
 * handleCommandLineArgs - Handle command line arguments and execute the command
 * @argc: The number of command line arguments
 * @argv: The array of command line arguments
 */
void handleCommandLineArgs(int argc, char *argv[]) {
    if (argc > 1) {
        char **args = &argv[1];
        execvFunction(args[0], args);
    }
}

#include "main.h"

/**
 * ExitShell - Exit the program with a specified status code.
 *
 * This function terminates the program immediately
 *
 * @param status - The exit status code.
 */
void Exit_Shell(char **arguments) {
  int exitCode = 0;
  if (arguments[1] != NULL) {
    exitCode = atoi(arguments[1]);
  }
  freeArguments(arguments);
  exit(exitCode);
}
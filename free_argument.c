#include "main.h"

void displayPrompt() { write(STDOUT_FILENO, "$ ", 2); }

void freeArguments(char **arguments) {
  int i = 0;

  while (arguments[i] != NULL) {
    free(arguments[i]);
    ++i;
  }

  free(arguments);
}
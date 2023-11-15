#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @string: The string to be calculated.
 *
 * Return: The length of the string.
 */
int strlength(const char *string) {
  int count = 0;

  while (string[count] != '\0') {
    count++;
  }

  return (count);
}

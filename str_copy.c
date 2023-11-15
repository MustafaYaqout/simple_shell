#include "main.h"

/**
 * _strcpy - Copy a string from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, const char *src) {
  char *dest_start = dest;

  while (*src != '\0') {
    *dest = *src;
    src++;
    dest++;
  }

  *dest = '\0';
  /* Null-terminate the destination string */
  return dest_start;
}

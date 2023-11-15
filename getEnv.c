#include "main.h"

/**
 * _getenv - Get the value of an environment variable.
 * @path: The name of the environment variable.
 *
 * Return: The value of the environment variable, or NULL if not found.
 */
char *_getenv(const char *path) {
  int i = 0;

  while (environ[i] != NULL) {
    char *key_env = strtok(environ[i], "=");
    char *value_env = strtok(NULL, "=");
    if (_strcmp(key_env, path) == 0) {
      return (value_env);
    }
    i++;
  }

  return (NULL);
}

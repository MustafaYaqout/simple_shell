#include "main.h"

/**
 * duplicateFunction - Duplicate a string.
 * @duplicate: The source string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails.
 */
char *duplicateFunction(char *duplicate) {
    size_t length;
    char *file_to_duplicate;

    if (duplicate == NULL) {
        return NULL;
    }

    length = strlength(duplicate);

    if (length == 0) {
        return NULL;
    }

    file_to_duplicate = malloc(length + 1);

    if (file_to_duplicate == NULL) {
        return NULL;
    }

    _strcpy(file_to_duplicate, duplicate);

    return file_to_duplicate;
}

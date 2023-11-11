#include "main.h"

/**
 * _putchar - write the char to standard output
 * @c: character to be printed
 *
 * Return: 1 (on success)
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c) {
    if (write(1, &c, 1) == -1) {
        perror("_putchar");
        return -1;
    }
    return 1;
}

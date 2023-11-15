#include "main.h"

/**
 * parse_cmd - Parse input into an array of tokens
 * @input: The input string to parse
 *
 * Return: Array of tokens, or NULL on failure
 */

char **parse_cmd(char *input)
{
	char **linptr;
	char *token;
	int i;
	int j;
	int buffsize = BUFSIZE;

	if (input[0] == ' ' && input[strlength(input)] == ' ')
		exit(0);
	if (input == NULL)
		return (NULL);

	linptr = malloc(sizeof(char *) * buffsize);

	if (!linptr)
	{
		perror("hsh");
		return (NULL);
	}

	token = strtok(input, "\n\t\r\a ");
	for (i = 0; token; i++)
	{
		linptr[i] = duplicateFunction(token);
		if (!linptr[i])
		{
			perror("hsh");
			for (j = 0; j < i; j++)
			{
				free(linptr[j]);
			}
			free(linptr);
			return (NULL);
		}
		token = strtok(NULL, "\n\t\r\a ");
	}
	linptr[i] = NULL;
	return (linptr);
}

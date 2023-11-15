#include "main.h"

/**
 * parse_cmd - Parse input into an array of tokens
 * @input: The input string to parse
 *
 * Return: Array of tokens, or NULL on failure
 */

char **parse_cmd(char *input)
{
	char **arguments;
	char *token;
	int i;
	int j;
	int buffsize = BUFSIZE;

	if (input[0] == ' ' && input[strlength(input)] == ' ')
		exit(0);
	if (input == NULL)
		return (NULL);

	arguments = malloc(sizeof(char *) * buffsize);

	if (!arguments)
	{
		perror("hsh");
		return (NULL);
	}

	token = strtok(input, "\n\t\r\a ");
	for (i = 0; token; i++)
	{
		arguments[i] = duplicateFunction(token);
		if (!arguments[i])
		{
			perror("hsh");
			for (j = 0; j < i; j++)
			{
				free(arguments[j]);
			}
			free(arguments);
			return (NULL);
		}
		token = strtok(NULL, "\n\t\r\a ");
	}
	arguments[i] = NULL;
	return (arguments);
}

#include "main.h"
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

void execvFunction(const char *lineptr, char *const argv[])
{
	pid_t pid = fork();

	if (pid < 0)
	{
		perror("Fork error");
		exit(EXIT_FAILURE);
	} else if (pid == 0)
	{
		if (execve(lineptr, argv, NULL) == -1)
				{
					char *actual_command = get_location(argv[0]);

					if (actual_command != NULL)
					{
						if (execve(actual_command, argv, NULL) == -1)
						{
							exit(EXIT_FAILURE);
						}
					} else
					{
						perror("error");
						exit(EXIT_FAILURE);
					}
				}
	} else
	{
		int status;

		waitpid(pid, &status, 0);
		if (!WIFEXITED(status))
		{
			perror("Error: Child process did not exit normally");
		}
	}
}

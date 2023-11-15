#include "main.h"


/**
 * execvFunction - Execute a command using execve.
 * @lineptr: The path to the command or the command name.
 * @argv: An array of strings representing the command and its arguments.
 *
 * This function forks a new process, and in the child process, it attempts
 * to execute the command specified by @lineptr using the execve system call.
 * If execve fails, it attempts to find the actual location of the command
 * using the get_location function and retries the execve call.
 *
 * @lineptr: The path to the command or the command name.
 * @argv: An array of strings representing the command and its arguments.
 */

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
					}
				else
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

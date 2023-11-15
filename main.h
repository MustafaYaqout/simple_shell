#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>


extern char **environ;

char *duplicateFunction(char *duplicate);
char **parse_cmd(char *input);
void removeTrailingSpaces(char *str);
char *_getenv(const char *path);
int strlength(const char *string);
char *_strcpy(char *dest, const char *source);
char *_strcat(char *dest, char *src);
int _strcmp(const char *str1, const char *str2);
void print_env(void);
int _putchar(char c);
int i_atoi(char *s);

void execvFunction(const char *lineptr, char *const argv[]);
char *get_location(char *command);
int parseInput(char *input, char ***argv);
void handleCommandLineArgs(int argc, char *argv[]);
void displayPrompt();
void freeArguments(char **arguments);
void Exit_Shell(char **arguments);
void HandleError(const char *message, char **arguments);
void ExecuteCommand(char **arguments);
char **parse_cmd(char *input);
#endif /* MAIN_H */

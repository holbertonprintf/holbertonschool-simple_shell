#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <unistd.h>

int _getchar(void);
ssize_t else_handle_input(char *lineptr, int stream, char *input, int filled);
ssize_t _getline(char *lineptr, int stream);
void _free(char **list, int count);
char **_strtok(char *str, char *delim);

#endif

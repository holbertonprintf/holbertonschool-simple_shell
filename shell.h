#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <unistd.h>

int _getchar(void);
ssize_t else_handle_input(char *lineptr, int stream, char *input, int filled);
ssize_t _getline(char *lineptr, int stream);
void _free(char **list, int count);
char **_strtok(char *str, char *delim);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int word_count(char *str, char *delim);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
int sizeof_command(char **tokens);
int _isdigit(int c);
int has_newline(char *input);
void shiftbuffer(char *input, int newline_index, int filled);

#endif

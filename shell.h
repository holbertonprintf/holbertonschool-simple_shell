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
size_t __list_len(list_t *h);
list_t *__add_node(list_t **head, void *ptr);
list_t *__add_node_end(list_t **head, void *ptr);
void __free_list(list_t *head);
void __free_list_full(list_t *head);
list_t *__get_node_at_index(list_t *head, unsigned int index);
list_t *__insert_node_at_index(list_t **head, unsigned int idx, void *ptr);
int __delete_node_at_index(list_t **head, unsigned int index);

#endif

#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <unistd.h>

/**
 * struct list_p - singly linked list
 * @ptr: a malloced address
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_p
{
	void *ptr;
	struct list_p *next;
} list_t;

/**
 * struct list_p2 - singly linked list
 * @ptr: a malloced string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton shell project
 */
typedef struct list_p2
{
	char *ptr;
	struct list_p2 *next;
} list_s;

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
void *do_mem(size_t size, void *ptr);
void do_exit(int fd, char *msg, int code);
char *_reverse(char *str, int n);
char *_itoa(int num);
char *_memset(char *s, char b, int n);
void signal_handler(int sig);
void handle_file(char *filename);
void main_loop(char *filename);
size_t list_len(list_s *h);
list_s *add_node(list_s **head, char *ptr);
list_s *add_node_end(list_s **head, char *ptr);
void free_list(list_s *head);
void free_list_full(list_s *head);
list_s *get_node_at_index(list_s *head, unsigned int index);
list_s *insert_node_at_index(list_s **head, unsigned int idx, char *ptr);
int delete_node_at_index(list_s **head, unsigned int index);
int linum(int add);
char *prog_name(char *name);
void my_error(char *command, int status, char *extra);
char **arrayify(list_s *head);
list_s *listify(char **arr);
void free_double_array(char **list);
char **do_env(char *add, char *delete);
char *read_textfile(char *filename);
int search_ops(char **tokens);
char **get_builtins();
char **get_path();
char *get_env_val(char *name);
char *find_path(char **path, char *command);
char **get_env(void);
char *get_full_command(char *path, char *command);
int exec_builtin(char **tokens, int bcase);
int check_access(char *comm, char *token);
char *prep_execve(char *token);
int exec_nb(char **tokens);
int env_builtin(void);
int setenv_builtin(char **tokens);
int unsetenv_builtin(char **tokens);
int cd_builtin(char **tokens);

#endif

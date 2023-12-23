#include "shell.h"

/**
  * get_builtins - list of builtin commands
  * Return: double pointer holding list of commands
  */
char **get_builtins()
{
	char **builtins;

	builtins = do_mem(sizeof(char *) * 6, NULL);

	builtins[0] = "exit";
	builtins[1] = "cd";
	builtins[2] = "env";
	builtins[3] = "setenv";
	builtins[4] = "unsetenv";
	builtins[5] = NULL;

	return (builtins);
}

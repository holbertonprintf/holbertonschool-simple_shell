#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
  * main - simple shell
  *
  *
  * Return: 0 if succesful
  */

int main()
{
	char *buff, *prompt = "simple_shell$  ", *strexit = "exit";
	ssize_t lgetline, buffsize = 1024;

	while(1)
	{
		write(STDOUT_FILENO, prompt, 11);
		buff = malloc(buffsize);

		while ((lgetline = _getline(&buff, buffsize, STDIN_FILENO)) < 0)
		{
			free(buff);
			return (-1);
		}

		if ((strcmp(buff, "exit")) == 0 || buff == strexit)
			exit(100);
		write(STDOUT_FILENO, buff, lgetline);
	}
	free(buff);
	return (0);
}

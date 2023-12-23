#include "shell.h"
#include <string.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * search_ops - search for ;, &&, || operators
  * @tokens: tokens from std input
  * Return: 0 if none, 1 if ';', 2 if '&&' 3 if '||'
  */
int search_ops(char **tokens)
{
	int i = 0;

	if (!tokens)
	{
		return (0);
	}
	for (i = 0; tokens[i]; i++)
	{
		/* check for ;, &&, || */
		if (tokens[i][0] == ';')
			return (1);
		if (tokens[i][0] == '&' && tokens[i][1] && tokens[i][1] == '&')
			return (2);
		if (tokens[i][0] == '|' && tokens[i][1] && tokens[i][1] == '|')
			return (3);
	}
	return (0);
}

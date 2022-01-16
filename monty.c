#include "monty.h"
/**
  * main - entry point of the program
  * @argc: argument counter
  * @argv: argument vector
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int line;
	size_t len = 1024;
	char *command, *buf = NULL;
	FILE *fd;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for (line = 1; getline(&buf, &len, fd) != -1; line++)
	{
		buf[strlen(buf) - 1] = 0;
		command = strtok(buf, " \t");
		if (!command)
		{
			free(buf);
			buf = NULL;
			continue;
		}
		if (command[0] == '#')
		{
			free(buf);
			buf = NULL;
			continue;
		}
		opcfinder(command, line, &stack);
		free(buf);
		buf = NULL;

	}
	free(buf), buf = NULL, fclose(fd), free_stack(stack);
	return (0);
}

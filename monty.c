#include "monty.h"

/**
 * main - monty
 * @argc: number of command line arguments
 * @argv: array of strings (arguments)
 * Return: 0
 **/
int main(int argc, char **argv)
{
	int getresult = 0;
	char *buffer = NULL;
	size_t size = 0;
	unsigned int numbofline = 0;
	char *array = NULL;
	stack_t **s = NULL;
	FILE *openf = NULL;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (argc != 2) /** Checks if one or more arg*/
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	openf = fopen(argv[1], "r");
	if (!openf)
	{
		fprintf(stderr, "Can't open file <%s>\n", argv[1]);
		return (EXIT_FAILURE); /** open fails */
	}

	getresult = getline(&buffer, &size, openf);
	while (getresult != -1) /** getline succees */
	{
		array = strtok(buffer, " \n\t");
		opcfinder(array, s, numbofline);
		numbofline++;
	}
	free(s);
	fclose(openf);
	return (1); /** success **/
}

#include "monty.h"

/**
 * main - monty
 * @argc: number of command line arguments
 * @argv: array of strings (arguments)
 * Return: 0
 **/
int main(int argc, char **argv)
{
  int open, read, getresult;
  char *buffer = NULL;
  size_t size = 0;
  unsigned int numbofline = 1;
  char **array = NULL;
  stack_t **s = NULL;
  
  s = malloc(sizeof(stack_t));
  if (s == NULL)
    {
      printf("Error: malloc failed\n");
      exit(EXIT_FAILURE);
    } 
  if (argc != 2) /** Checks if one or more arg*/
    {
      printf(stderr, "USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  open = fopen(argv[1], O_RDONLY);
  if (open < 0)
    {
      fprintf(stderr, "Error: Can't open file <file>\n");
      return (EXIT_FAILURE); /** open fails */
    }
  
  getresult = getline(&buffer, &size, open)
	while (getresult != -1) /** getline succees */
	  {
	   array = tokenize(buffer, " \n\t");
	   opcodesfinder(array, stack, numbofline);
	   numberofline++;
	  }
  freearray(array);
  free(stack);
  fclose(open);
  return (1); /** success **/
}

#include <stdio.h>

/**
  *main- prints all arguments passed
  *@ac: number of arguments in av
  *@av: array of strings (arguments)
  *
  *Return: all arguments passed
  */
int main(int ac, char **av)
{
	(void) ac;

	printf("Arguments:\n");
	for (int i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}

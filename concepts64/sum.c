#include <stdio.h>
#include <stdlib.h>
/**
  *main- give sum of the arguments
  *@ac: number of arguments
  *@av: the arguments
  *
  *Return: sum of the arguments
  */
int main(int ac, char **av)
{
	int i;
	int sum = 0;

	printf("argc or ac = %d\n", ac);
	for (i = 1; i < ac; i++)
	{
		printf("argv [%d] = %s\n", i, av[i]);
		sum += atoi(av[i]);
	}
	printf("Sum is %d\n", sum);
	return (0);
}

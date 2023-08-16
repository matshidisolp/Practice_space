#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
  *print_str- prints a string
  *@str: the string to be printed by function
  *
  *Return: string
  */
void print_str(char *str)
{
	while (*str)
	{
		write(STDOUT_FILENO, str, 1);
		str++;
	}
}
/**
  *main- uses getline to read from stdin
  *Description: practice getline function and print out the string
  *		using printf and also using a function
  *Return: string inputted by the user
  */
int main(void)
{
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t num_char;

	printf("$ ");
	num_char = getline(&lineptr, &n, stdin);
	printf("Printf: %s", lineptr);
	printf("Buf size: %ld\n", n);
	print_str(lineptr);

	free(lineptr);

	return (0);
}

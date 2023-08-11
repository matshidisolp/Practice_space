#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

void print_char(char *str)
{
	int i;

	while(*str)
	{
		write(STDOUT_FILENO, str, 1); 
		str++;
	}
}
int main(void)
{
	char *lineptr;
	ssize_t n;
	ssize_t num_char;
	char *prompt = "Username$ ";
//print $ 
//print the content of lineptr
//print $
	while(num_char > 0)
	{
		print_char(prompt);
		//putchar('$');
		//putchar(' ');
		num_char = getline(&lineptr, &n, stdin);
		print_char(lineptr);
	}

	return (0);
}

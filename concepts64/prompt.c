#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

void print_str(char *str)
{

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
		print_str(prompt);
		//putchar('$');
		//putchar(' ');
		num_char = getline(&lineptr, &n, stdin);
		print_str(lineptr);
	}

	return (0);
}

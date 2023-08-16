#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
  *print_str- prints a string from stdin
  *@str: the string to be printed
  *
  *Return: the characters of the string 
  */
void print_str(char *str)
{
	while(str)
	{
		write(STDOUT_FILENO, str, 1);
		str++;
	}
}
/**
  *own_getl- reads from stdin and prints to stdout
  *Description: own version of getline using read
  *
  *Return: the inputted string
  */
int main(void)
{
	//read line using read
	char buf [100];
	ssize_t read_bytes;

	printf("$ ");
	read_bytes = read(STDIN_FILENO, buf, sizeof(buf));

	printf("%s\n", buf);
	printf("Characters read: %ld\n", read_bytes);

	return (0);
}

	//if the buffer is smaller than line realloc
//ssize_t getline(char **lineptr, size_t *n, FILE *stream);
//char *lineptr = NULL;
//size_t n = 0;
//ssize_t num_char;
//printf("$ ");
//num_char = getline(&lineptr, &n, stdin);
//printf("Printf: %s", lineptr);
//printf("Buf size: %ld\n", n);
//print_str(lineptr);
//free(lineptr);
//return (0);

//ssize_t read(int fd, void *buf, size_t count);

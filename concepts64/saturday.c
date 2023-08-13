#include <stdio.h>
#include <unistd.h>

//getline reads the string
int main(void)
{
	char *lineptr;
	ssize_t n;
	ssize_t num_char;

	num_char = getline(&lineptr, &n, stdin);
	printf("%s", lineptr);
	return (0);
}

//split it into tokens strtko and its delim


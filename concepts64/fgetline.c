#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
  *main- uses fgets to read a line
  *Description: own version of getline using fgets
  *Return: inputted string
  */
int main(void)
{
	char buf[100];
	char *str;
	int size;

	printf("$ ");

	str = (char *)malloc(sizeof(buf));
	fgets(str, sizeof(buf), stdin);
	printf("%s", str);

	free(str);
}
//char *fgets(char *s, int size, FILE *stream);

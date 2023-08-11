#include <stdio.h>
#include <stdlib.h>
/**
  *my_getline- own version of the standard getline function
  *
  *Return: Always 0 sucess
  */

char *my_getline()
{
	char *line = NULL;
	size_t bufsize = 0;
	ssize_t characters_read;

	characters_read = getline(&line, &bufsize, stdin);

	if (characters_read == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
	}
	if (characters_read > 0 && line[characters_read - 1] == '\n')
		line[characters_read - 1] = '\0';
	return line;
}

int main() {
    printf("Enter a line of text: ");
    char *input = my_getline();
    printf("You entered: %s\n", input);
    free(input);
    return 0;
}

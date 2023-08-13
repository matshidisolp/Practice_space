#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100

char **split_string(const char *str, const char *delimiter, int *word_count)
{
	char **words = malloc(MAX_WORDS * sizeof(char *));
	char *token;
	int count = 0;

	if (!words)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	token = strtok(str, delimiter);

	while (token != NULL)
	{
		words[count] = strdup(token);
		if (!words[count])
		{
			perror("strdup");
			exit(EXIT_FAILURE);
		}
		count++;
		token = strtok(NULL, delimiter);
	}
	*word_count = count;
	return words;
}

#include <stdio.h>
#include <string.h>

/*char *strtok(char *str, const char *delim);*/
int main(void)
{
	char str[] = "Hello world is fun";
	const char *delim = " ";
	char *token;

	token = strtok(str, delim);
	printf("%p\n %p\n", str, token);
	while (token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, delim);
		}
	/*printf("Str: %p\n", str);
	printf("Token: %p\n", &token);*/
	return (0);
}
/* alternative loop 
   int i;
for (i = 0; i < 20; i++)
{
	if (str[i] == '\0')
		printf("\n");
	else
		printf("%c", str[i]):
}*/

/* using a pointer instead of array for the str
#include <stdlib.h>
char *str = "Hello world is fun";
char *stc = malloc(sizeof(char) * strlen(str));
strcpy(stc, str);
token = strtok(stc, delim);
also replace str with stc in the for loop and remember to free(stc)*/

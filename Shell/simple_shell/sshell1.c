#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main- mimick shell prompt
 *
 *Return:the inputted command
 */
int main(void)
{
	char usercmd[100];

	printf("$ ");
	if (fgets(usercmd, sizeof(usercmd), stdin) == NULL)
		printf("$ ");

	usercmd[strcspn(usercmd, "\n")] = '\0';

	if (strcmp(usercmd, "exit") == 0)
	{
		return (0);
	}

	printf("%s\n", usercmd);

	return (0);
}

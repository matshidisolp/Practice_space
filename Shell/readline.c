#include <stdio.h>
#include <stdlib.h>
/**
  *main- prints user inputted command
  *
  *Return: the command inputted by the user
  */
int main(void)
{
	printf("$ ");

	char usercmd[100];

	fgets(usercmd, sizeof(usercmd), stdin);
	printf("You entered: %s", usercmd);

	return (0);
}

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *args[] = {"ls", "-l", NULL};
	char *env[] = {NULL};  // Empty environment

	if (execve("/bin/ls", args, env) == -1)
	{
		perror("execve");
		return (1);
	}
	return (0);
}
//int execve(const char *filename, char *const argv[], char *const envp[]);

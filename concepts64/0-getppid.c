#include <unistd.h>
#include <stdio.h>

/**
  *main- prints the PID of child and parent of current process
  *
  *Return: parent process ID of current process
  */
int main(void)
{
	pid_t child_ID = getpid();
	pid_t parent_ID = getppid();

	printf("Child process ID is %d\n", child_ID);
	printf("Parent process ID is %d\n", parent_ID);
	return (0);
}

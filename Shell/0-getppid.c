#include <unistd.h>
#include <stdio.h>

/**
  *main- prints the PID of the parent for current process
  *
  *Return: parent process ID of current process
  */
int main(void)
{
	pid_t parent_ID = getppid();

	printf("Parent process ID is %d\n", parent_ID);
	return (0);
}

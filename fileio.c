#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	FILE *fptr;
	fptr = fopen("/home/matshidisolp/alx0523/Practice_space/program.txt
","w");

	if(fptr == NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Enter num: ");
	scanf("%d",&num);

	fprintf(fptr,"%d",num);
	fclose(fptr);

	return 0;
}


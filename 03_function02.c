#include <stdio.h>

void pressAnyCh(void)
{
	
	printf("\nPress any key to continue:");
	getchar();
}

int main()
{
	puts("Read these directions!");
	pressAnyCh();
	
	puts("Are you sure you read the directions?");	
	pressAnyCh();
	
	puts("Okay");	
	pressAnyCh();

	
	return (0);
}


#include <stdio.h>

/*
 * 
 * do while loop - the statements repeat at least once
 * */
int main()
{
	int a;
	
	puts("Enter a value : ");
	scanf("%d",&a);
	
	do
	{
		puts("Here we go!\n");
		a--;
	}
	while(a>0);
		
	return(0);
}


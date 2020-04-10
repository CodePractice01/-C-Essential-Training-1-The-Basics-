#include <stdio.h>

/*
 * recursive function
 * 
 * --recursively scan subdirectories to look for files
 * --repetitive-decision puzzles -
 * -- code for deciding which way to turn 
 * */
 //factorial function calculate via the return statement 
int factorial(int f)
{
	if(f ==1)
		return(f);
	return (f*factorial(f-1)); // return: multiples the current value wutge value of variable f minus one
}


int main()
{
	int a,b;
	
	printf("Enter a positive value: ");
	scanf("%d",&a);
	
	if(a<1)
	{
			printf("%d is not a positive value\n",a);
			return(1);
	}
	
	b=factorial(a);
	printf("The factorial if %d! is %d\n\n",a,b);
	return(0);
}

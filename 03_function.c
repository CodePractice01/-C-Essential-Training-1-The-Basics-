#include <stdio.h>

void sum(void)
{
	int a,b;
	
	a=91;
	b=7;
	printf("sumfunction : %d / %d = %d\n\n",a,b,a/b);
}

int main()
{
	puts("main function - Calling the sum(function)");
	sum();
	
	puts("mainFunction- done");
	return (0);
}


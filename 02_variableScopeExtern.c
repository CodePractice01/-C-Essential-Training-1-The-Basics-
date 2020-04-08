#include <stdio.h>

/*****
 * variable scope extern
 * ****/



void Sum(void)
{
		extern int a,b;
		
		a=91;
		b=7;
		//printf ("%d / %d = %d \n",a,b,a/b);
	
}

int main()
{
	extern int a,b;
	
		puts("Calling the sum() function\n\n");
		
		Sum();
		
		puts("And in main()");
		
		printf("%d / %d = %d \n",a,b,a/b);
		
		return(0);
}

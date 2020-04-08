/*****
 * variable scope external
 * ****/

#include <stdio.h>

void sum(void)
{
		extern int a,b;
		
		a=91;
		b=7;
		printf ("%d / %d = %d \n",a,b,a/b);
	
}

int main()
{
	extern int a,b;
	
		puts("Calling the sum() function\n\n");
		
		sum();
		
		puts("And in main()");
		
		printf(" %d/%d = %d \n",a,c,a/c);
		
		return(0);
}

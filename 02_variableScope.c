/*****
 * variable scope keywords
 *  -auto   -variables are private and locat to the function
 * 			- their valus are released after the function quits
 *  
 *  - extern - it's avaibled to all functions
 * 			-are required only when they must be accessed by all functions
 *  - static - are local to a specific function, but retains
 * 				its value when the function quits.
 * 
 * ****/

#include <stdio.h>

void sum(void)
{
		auto int a,b;
		
		a=91;
		b=7;
		printf ("%d / %d = %d \n",a,b,a/b);
	
}

int main()
{
	int a,b;
	
		puts("Calling the sum() function\n\n");
		
		sum();
		
		puts("And in main()");
		
		printf(" %d/%d = %d \n",a,c,a/c);
		
		return(0);
}

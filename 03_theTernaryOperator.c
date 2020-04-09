#include <stdio.h>

/*
 *  comparison ? true : false
 *  
 *  -- a single variable that the operator returns
 * 
 * 
 * */
int main()
{
		int a,b,c;
		a=10;
		b=14;
		
		c= (a > b) ? a:b ;
		printf("%d is the greater of %d and %d \n",c,a,b);

	
		return(0);
}

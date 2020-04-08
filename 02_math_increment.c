#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{

	int a,b;
	
	a=10;
	b=a;
	
	printf("a is %d and b = %d \n",a,b);
	a++;
	b--;
	printf("increment a = %d and decrement b = %d \n",a,b);
	
	//example 2 
	printf("before a =%d and b = %d \n",--a,++b);
	printf("after a = %d and = %d \n",a,b);
	return(0);
	
}

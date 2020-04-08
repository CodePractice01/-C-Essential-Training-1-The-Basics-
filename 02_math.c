#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{

	int a,b;
	
	a=20;
	b=8;
	
	puts("Basic math");
	printf("%d + %d = %d \n",a,b,a+b);
	printf("%d - %d = %d \n",a,b,a-b);
	printf("%d * %d = %d \n",a,b,a*b);
	printf("%d / %d = %f \n",a,b,(float)a/b);
	
	return(0);
	
}

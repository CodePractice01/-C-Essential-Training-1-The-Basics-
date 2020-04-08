#include <stdio.h>

int main ()
{

	int a,b;
	
	for(a=1;a<10;a++)
	{
			b=a%3;
			printf("%2d %% 3 = %d \n",a,b);
	}
	
	return(0);
	
}

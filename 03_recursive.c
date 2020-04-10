#include <stdio.h>

void recurse(int a)
{
	a++;
	printf("%d \n",a);
	if( a == 5)
		return;
	recurse(a);
}


int main()
{
	recurse(0);	
	return(0);
}

#include <stdio.h>

int funct(void)
{
	//static --variable A value it's not reset to zero
	//when use the static storage class , insure that on taht same line you initialize the variable
	static int a=0;
	
	a+=16;
	printf("in funct(), A = %d\n",a);
	
	return(a);
}


int main()
{
	int a;
	a=funct();
	printf("In main(), A= %d\n",a);
	
	a=funct();
	printf("In main(), A= %d\n",a);
	
	a=funct();
	printf("In main(), A= %d\n",a);
		
		return(0);
}

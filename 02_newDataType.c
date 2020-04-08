#include <stdio.h>


/******
 * used typedef keyword
 * 
 * *****/

typedef float radius;

int main()
{
	//typedef float radius;
	// keywords specific types variable name
	radius a;
	
	a = 27.5;
	
	printf("A circle with radius %.2f has an area of %.2f \n", 
				a, a*a*3.1415926);
	
	return(0);
	
}

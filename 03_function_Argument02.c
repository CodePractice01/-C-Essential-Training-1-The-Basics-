#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 
 * 
 * */
float average(float a, float b, float c)
{
	float avg;
	avg = (a+b+c) /3;
	return(avg);
}

int main()
{
	float a;
	
	a = average(29.0, 37.0, 30.2);
	
	printf("Result is: %.2f\n",a);
	
	return (0);
}



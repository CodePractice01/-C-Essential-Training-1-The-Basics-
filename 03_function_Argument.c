#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 
 * 
 * */
void repeat(int count)
{
	int x;
	
	for(x=0;x<count;x++)
	{
		printf("Tralal  ");
	}
	putchar('\n');
}

int main()
{
	printf("Chris said: ");
	repeat(1);
	
	printf("Pat said:");
	repeat(3);
	return (0);
}


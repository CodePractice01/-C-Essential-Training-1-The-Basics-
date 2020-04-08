#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	const int n=8;
	
	int x,r[5];
	srand((unsigned)time(NULL));
	
	for(x=0;x<n;x++){
			r[x] =rand()%10+1;
	}
	printf ("%d random values:\n",n);

	for(x=0;x<n;x++)
		printf("%3d \n",r[x]);
		
	return(0);
}

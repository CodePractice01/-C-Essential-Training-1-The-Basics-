#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int a;
	
	srand( (unsigned)time(NULL) );
	
	for(a=0;a<13;a++)
	{
		printf ("%3d",rand()%100+1);
		putchar('\n');
		
	}
	

	
	
	return (0);

}

/*
 * include directory
 * when < and > are used -- the file is grabben from /usr/include 
 * or usr/local/include
 * 
 * when double quotes are used, the file si grabbed from the local directory(same as the source code)
 * */

 

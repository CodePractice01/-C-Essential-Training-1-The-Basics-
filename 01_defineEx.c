#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 13
#define GREETING "GreenPAce"

int main()
{
	int a;
	
	srand( (unsigned)time(NULL) );
	
	for(a=0;a<COUNT;a++)
	{
		printf ("%3d",rand()%100+1);
		putchar('\n');
		
	}
	
	puts (GREETING);
	
	
	return (0);

}

/*
 * include directory
 * when < and > are used -- the file is grabben from /usr/include 
 * or usr/local/include
 * 
 * when double quotes are used, the file si grabbed from the local directory(same as the source code)
 * */

/*
 * DEFINE directive is used for substitution
 * -can create a constant expression
 * -create a macro -- contains C language expresions
 * 
 * */
 

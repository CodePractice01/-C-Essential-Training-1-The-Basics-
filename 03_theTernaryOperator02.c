#include <stdio.h>

/*
 *  comparison ? true : false
 *  
 *  -- a single variable that the operator returns
 * 
 * 
 * */
int main()
{
		int x;
		for(x=1;x<=10;x++)
		{
			printf("%d - %s\n",x, x%2? "odd" : "even");
			//x%2? "odd" : "even" - conditia care verifica
			// daca nr este par sau impar
		}
		
		return(0);
}

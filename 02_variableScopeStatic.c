#include <stdio.h>

/*****
 * variable scope extern
 * ****/


char *myname(void)
{
	// char me[] = "Zacusca E"; -- la compilare va da eroare
		static char me[] = "Zacusca E";
		return(me);
	
}

int main()
{
		printf("Hello %s\n", myname());
		
		return(0);
}

#include <stdio.h>
#include <string.h>

/******
 *  typedef keyword on struct
 * 
 * *****/


int main()
{

	typedef struct person {
		char name[32];
		int iq;
	} human;
	//struct person me;
	
	human me;
	
	strcpy(me.name, "Erm E");
	me.iq = 590;
	
	printf("%s has an IQ oof %d\n", me.name, me.iq);
	
	return(0);
	
}

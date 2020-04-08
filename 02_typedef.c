#include <stdio.h>
#include <string.h>

/******
 *  typedef keyword on struct
 * 
 * *****/


int main()
{

	struct person {
		char name[32];
		int iq;
	};
	//struct person me;
	
	typedef struct person human;
	//typedef used to create an alias, for the person structure 
	
	human me;
	// 'human' is used to create de person structure 'me '
	
	strcpy(me.name, "Erm E");
	me.iq = 590;
	
	printf("%s has an IQ oof %d\n", me.name, me.iq);
	
	return(0);
	
}

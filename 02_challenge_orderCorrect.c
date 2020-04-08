#include <stdio.h>

int main ()
{

	int artifacts,rooms, paintings,sculptures;
	
	rooms =12;
	paintings=16;
	sculptures =4;
	
	artifacts = rooms * (paintings + sculptures);
	
	printf("Thi museum has %d artifacts ",artifacts);
	
	return(0);
	
}

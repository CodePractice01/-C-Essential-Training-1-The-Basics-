#include <stdio.h>
#include <time.h>

/******
 * time_t -  return a datetime string 
 * 
 * *****/

int main()
{
	time_t now;
	
	time(&now);
	
	printf("Current datetime  >> %s ", ctime(&now));
	
	return(0);
	
}

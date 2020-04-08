#include <stdio.h>

int main()
{
		int x,o;
		
		for(x=0x1; x<= 0x10;x++) // loop from hex valeu 0 to hexdecimal 10
			printf("0x%X = %d\n",x,x);
		for(o=01; o<=010; o++) //loop throught octal 1 to octal 10
			printf("0%o = %d \n", o,o);
			
	return (0);
}

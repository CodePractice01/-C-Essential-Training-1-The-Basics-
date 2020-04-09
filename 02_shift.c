#include <stdio.h>

/****
 * & AND
 * | - incluside OR
 * ^ - exclusive OR operator
 * ~  - one's complement
 * 
 * */
 
 
char *binString(unsigned short n)
{
		static char bin[17];
		int x;
		
		for(x=0;x<16;x++)
		{
				bin[x] = n & 0x8000? '1' : '0';
				n<<=1;
		}
		bin[16] = '\0';
		return(bin);
}

int main()
{
		unsigned short a;
		int x;
		
		a=0x0003;
		
		for(x=0;x<16;x++)
		{
				printf(" %04X - %s\n"  ,a, binString(a));
				//a=a << 1; //shifted left one bit position
				
				//shift is two positions
				a=a << 2;
		}
	
	return (0);
		
		return(0);
}

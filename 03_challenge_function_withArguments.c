#include <stdio.h>

void line(int length, char c)
{
	int a ;
	
	for(a=0; a<length;a++)
	
		putchar(c);
	putchar('\n');
}

int main()
{
	puts("Activity Report");
	line(35, '-');
	line(20, '$');
	
	return (0);
}



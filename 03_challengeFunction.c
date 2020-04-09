#include <stdio.h>

void line(void)
{
	
	int i;
	
	for(i=0;i<40;i++)
		putchar('-');
	putchar('\n');
}

int main()
{
	puts("favorite movie");
	line();
	puts("favorite sport");
	line();
	return (0);
}


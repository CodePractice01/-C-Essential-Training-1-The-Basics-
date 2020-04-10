#include <stdio.h>

/*
 * recursive function
 * */
void recurse(int q)
{
	int a;
	
	for(a=0;a<q;a++)
		putchar('-');
	puts("->Wind-up !");
	
	if(q == 10)
		return;
		
	recurse(q+1);
	
	for(a=0;a<q;a++) //q=10
		putchar('-');
	puts("-< Unwinding");
}


int main()
{
	recurse(0);	
	return(0);
}

#include <stdio.h>

int main()
{
		char a;
		int b;
		float c;
		double d;
		char string[]="Aloha!";
		int buffer[10];
		
		
		printf("char variable uses %lu bytes\n", sizeof(a));
		printf("int variable uses %lu bytes\n", sizeof(b));
		printf("float variable uses %lu bytes \n", sizeof(c));
		printf("double variable uses %lu bytes \n", sizeof(d));
		printf("string array variable uses %lu bytes \n", sizeof(string));
		printf("int array variable uses %lu bytes \n", sizeof(buffer));

	return(0);
}

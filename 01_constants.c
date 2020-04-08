/*
char and int qualifiers
	signed -- is both positive and nevalite values
	unsigned -- is only positive value

---constant must be assigned a value 
*/

#include <stdio.h>

int main()
{
	const char greetings[] = "String literal";
	const int n=99;
	
	puts(greetings);
	//n++  --error- cannot modify the constant value - is onlye read-only
	printf("N is %d",n);
	
	return(0);
}

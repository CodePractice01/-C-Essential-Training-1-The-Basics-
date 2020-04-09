#include <stdio.h>

int main()
{
		int a;
		
		printf("Select : 1 / 2 /3  ");
		scanf("%d",&a);
		
		if(a == 1)
			puts("This is the first element");
		
		else if(a == 2)
			puts("This is the second element");
			
		else if(a == 3)
			puts("This is the third element");
	
		
		else
			puts("Invalid choise");
		return(0);
}

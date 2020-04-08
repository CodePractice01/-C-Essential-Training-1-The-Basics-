#include <stdio.h>

int main ()
{

	int a;
	
	printf("Type a value :  ");
	scanf("%d",&a);
	
	if(a<10)
	{
			puts("You typed a value less than 10\n");
	}
	else {
		puts("You typed a value > 10\n");
	}
	
	// for
	for(a=0;a<=10;a++)
	{
		printf("Help! i'm trapped in the computer for %d times !\n",a);
		
	}
	//while loop
	int x=0;
	while(x<=20)
	{
		puts("Good day to you");
		x++;
		if(x == 10)
			break;
	}
	
	
	
	return(0);
	
}

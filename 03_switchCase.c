#include <stdio.h>

/*
 *  switch case
 * 
 * */
int main()
{
		char a;
		
		puts("Menu");
		puts(" A - Bugs");
		puts("B- snake surprise");
		puts("C - Eyeball Soup");
		puts("Your choise:");
		scanf("%c",&a);
		
		switch(a)
		{
				case 'A':
				case 'a':
					puts("Delicious! A hearty snack.");
					break;
				
				case 'B':
				case 'b':
					puts("A family favourite!");
					break;
					
				case 'C':
				case 'c':
					puts("From a secret recipe");
					break;
				default:
					puts("Invalide choice");
			
			
		}
		
		return(0);
}

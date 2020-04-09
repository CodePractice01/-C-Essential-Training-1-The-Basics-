#include <stdio.h>

int main()
{
		/*int a =1;
		
		while (a < 3300)
		{
				printf("%d\n",a);
				
				a=a<<1;
		}
		*/
		
		// shift right bitwise operator
		
		int a = 1000000;
		
		while (a>0)
		{
				printf("%d \n",a);
				a=a >>1;//cuts the value on half
		}
		
		return(0);
	
}

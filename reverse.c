#include <stdio.h>
int main()
{
	int num=7869;
	int r;
	
	printf("Number = %d",num);
	printf("\n Result = ");
	
	r=num%10;
	num=num/10;
	printf("%d",r);
	
	r=num%10;
	num=num/10;
	printf("%d",r);
	
	r=num%10;
	num=num/10;
	printf("%d",r);
	
	r=num%10;
	printf("%d",r);
	return(0);
}
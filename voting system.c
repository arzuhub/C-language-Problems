#include<stdio.h>
int main()
{
	int age;
	
	printf("\n Enter the age =");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n The age is valid for vote");
	}
	
	if(age<18)
	{
		printf("\n The age is not valid for vote");
	}
	
	return(0);
}


//WAP to Find Max number from 3 numbers.
#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	
	//a,b,c
	if(a>b)
	{
		if(a>c)
		{
			printf("a is max:");
		}
		else
		{
			printf("c is max:");
		}
	}
	else
	{
		//b,c
		if(b>c)
		{
			printf("b is max:");
		}
		else
		{
			printf("c is max:");
		}
	}
}
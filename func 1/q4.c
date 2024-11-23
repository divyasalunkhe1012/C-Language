#include<stdio.h>
void main()
{
	vote(20);
}
void vote(int n)
{
	if(n>=19)
	{
		printf("You are eligible for vote !");
	}
	else
	{
		printf("You are not eligible for vote !");
	}
}


#include<stdio.h>

  main()
{
	int a,b,c,d,e;
	
	printf("Enter the a:");
	scanf("%d",&a);
	printf("Enter the b:");
	scanf("%d",&b);
	printf("Enter the c:");
	scanf("%d",&c);
	printf("Enter the d:");
	scanf("%d",&d);
	printf("Enter the e:");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a>b)
	{
		//a,c,d,e
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				if(a>e)
				{
					//a
				printf("a is max:");
			}
			else
			{
				//e
				printf("e is max:");
			}
			}
			else
			{
				//d
				printf("d is max");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b>c)
		{
			//b,c
			printf("b is max");
		}
		else
		{
			//C,D
			if(c>d)
			{
				//c
				printf("c is max");
			}
			else
			{
				if(d>e)
				{
				//d
				printf("d is max");
			    }
			    else
			    {
			    	printf("e is max");
				}
			}
		}
}	}

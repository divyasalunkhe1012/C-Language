#include<stdio.h>

void main()
{
	int n;
	printf("Enter a size of array :");
	scanf("%d",&n);
	
	int a[n];
	
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("Negative number : \n");
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf(" %d",a[i]);
		}
		
	}
}

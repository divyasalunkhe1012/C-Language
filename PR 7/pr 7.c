#include<stdio.h>

int addition(int value1,int value2)
{
	int addition;
	addition=value1+value2;
	return addition;
}
int substraction(int value1,int value2)
{
	int substraction;
	substraction=value1-value2;
	return substraction;
}
int multiplication(int value1,int value2)
{
	int multiplication;
	multiplication=value1*value2;
	return multiplication;
}
int division(int value1,int value2)
{
	int division;
	division =value1/value2;
	return division;
}
int module(int value1,int value2)
{
	int module;
	module=value1%value2;
	return module;
}
int main()
{
	int num1,num2,choice;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	printf("Enter your choice :");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("The addition is %d",addition(num1,num2));
	}
	else if (choice==2)
    {
		printf("The substraction is %d",substraction(num1,num2));
	}
	else if(choice==3)
	{
		printf("The multiplication is %d",multiplication(num1,num2));
	}
	else if (choice==4)
	{
		printf("The division is %d",division(num1,num2));
	}
     else if(choice==5)
	{
		printf("The module is %d",module(num1,num2));
	}
	
}


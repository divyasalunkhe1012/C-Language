#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c,d;

 printf("Enter a:");
 scanf("%d",&a);
 printf("Enter b:");
 scanf("%d",&b); 
 printf("Enter c:");
 scanf("%d",&c);
 printf("Enter d:");
 scanf("%d",&d);  
 
 if(a<b)
{
if(a<c)
{
if(a<d)
{
printf("a is min:");
}
else
{
printf("d is min:");
}
}
}
//b,c,d
else
{
if(b<c)
{
if(b<d)
{
printf("b is min:");
}
else
{
printf("d is min:");
}
}
else
{
if(c<d)
{
printf("c is min:");
}
else
{
printf("d is min:");
}
}
}
}
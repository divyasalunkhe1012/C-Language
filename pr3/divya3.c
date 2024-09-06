#include<stdio.h>
#include<conio.h>

void main()
{
 int n,first,last,sum;
 printf("enter n:");
 scanf("%d",&n);
 last=n%10;
while(n>10)
{
n=n/10;
}
first=n;
sum=first+last;
printf("%d",sum);
}
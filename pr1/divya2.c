#include <stdio.h>
#include<conio.h>

void main() 
{
    float angle1, angle2, angle3;
	
    printf("Enter the first angle of the triangle: ");
    scanf("%f", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%f", &angle2);

    
    angle3 = 180 - (angle1 + angle2);

    
    printf("The third angle of the triangle is: %.3f deggres .\n", angle3);

    
}
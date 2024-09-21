#include <stdio.h>
#include<conio.h>


void  main() 

{

    float baseSalary, hraPercent, daPercent, taPercent;
    float hra, da, ta, grossSalary;

    
    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);

    
    printf("Enter the percentage of HRA: ");
    scanf("%f", &hraPercent);
    
    printf("Enter the percentage of DA: ");
    scanf("%f", &daPercent);
    
    printf("Enter the percentage of TA: ");
    scanf("%f", &taPercent);

    // Calculate HRA, DA, and TA
    hra = (hraPercent / 100) * baseSalary;
    da = (daPercent / 100) * baseSalary;
    ta = (taPercent / 100) * baseSalary;


    grossSalary = baseSalary + hra + da + ta;


    
    printf("Base Salary: %.2f\n", baseSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("Gross Salary: %.2f\n", grossSalary); 
}


/*
Name: Mutua Lavender Mwongeli.
Reg no.: CT101/G/26570/25.
Unit: Introduction to programming and problem soliving.
Date: 21/09/2025.
Description: A c program to check loan requirements.
*/
#include <stdio.h>

int main () {
    //variable declaration
    int age;
    float Annual_income;
    
    //take user input
    printf("Kindly enter your age:");
    scanf("%d", &age);
    
    printf("\nWhat is your annual income in Kenyan Shillings?:");
    scanf("%f", &Annual_income);
    
    //check for qualifications and display output
    if (age >=21 && Annual_income >=21000.0){printf("\nCongratulations you qualify for a loan.");}  else { printf("\nUnfortunately, we are unable to offer you a loan at this time.");
    }
    
    return 0;
}
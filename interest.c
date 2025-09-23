/*
Name: Mutua Lavender Mwongeli.
Reg no: CT101/G/26570/25.
Unit: Introduction to programming and problem solvig.
Date: 21/09/2025.
Description: A c program to calculate componud interest.
*/
#include <stdio.h>
#include <math.h>

int main () {
    //variables declaration
    float principal_amount , rate , Time , amount , interest;
    
    //take the input
    printf("Enter principal amount: \n");
    scanf("%f", &principal_amount);
    
    printf("Enter time: \n");
    scanf("%f", &Time);
    
    printf("Enter rate: \n");
    scanf("%f", &rate);
    
    //formulae
    amount = principal_amount * pow((1 + rate/100),Time);
    interest = amount - principal_amount;
    
    //display calculated output
    printf("The compound interest is $%.2f \n", &interest);
    printf("The total amount is $%.2f", &amount);
    return 0;
}
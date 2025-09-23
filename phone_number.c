/*
Name: Mutua Lavender Mwongeli.
Reg no.: CT101/G/26570/25.
Unit: Introduction to programming and problem solving.
Date: 21/09/2025.
Description: A c program to prompt the user to enter their height,bank balance and phone number.
*/
#include <stdio.h>

int main () {
    //variable declaration
    int Height , Bank_balance , Phone_number;
    
    //take user details
    printf("Enter Height:");
    scanf("%d", &Height);
    
    printf("\nEnter Bank balance:");
    scanf("%d", &Bank_balance);
    
    printf("\n Enter your mobile phone number:");
    scanf("%d", &Phone_number);
    
    //display user details as output
    printf("\nYour height is %d", &Height);
    printf("\nYour bank balance is %d", &Bank_balance);
    printf("\nYour phone number is %d", &Phone_number);
    
    return 0;
}
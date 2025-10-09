/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 7/10/2025
Description: A C PROGRAM THAT USES DO WHILE LOOP TO PROMPT THE USER FOR THE PASSWORD UNTIL THE CORRECT ONE IS ENTERED
*/

#include <stdio.h>  //scanf(), printf()

//main function
int main() {
	
	//variables declaration
    int password_attempt;
    const int correct_password = 1234; // Define the correct password

    do {
    	//prompt the user to enter password
        printf("Please enter the password: ");
        scanf("%d", &password_attempt);

        if (password_attempt != correct_password) {
            printf("Incorrect password. Please try again.\n"); //If the password is incorrect,prompt for another attempt 
        }
    } while (password_attempt != correct_password);

    printf("Access Granted\n");  //If the password is correct,print a success message

    return 0;  //execution successful
}


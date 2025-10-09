/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 7/10/2025
Description: A C PROGRAM THAT USES WHILE LOOP IMPLEMENTS A NUMBER GUESSING GAME, COUNTS AND DISPLAYS THE TOTAL NUMBER OF ATTEMPTS IT TOOK FOR THE PLAYER TO GUESS CORRECTLY
*/


#include <stdio.h>  //scanf(), printf()
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {  //main function
    //variables declaration
	int secretNumber;
    int guess;
    int attempts = 0;

    // Seed the random number generator using the current time
    srand(time(0));

    // Generate a random number between 1 and 20 (inclusive)
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have generated a secret number between 1 and 20.\n");

    do {
    	//taking player input
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n"); //If the player's guess is too high
        } else if (guess < secretNumber) {
            printf("Too low!\n"); //If the player's guess is too low
        } else {
            printf("Congratulations!\n", secretNumber); //If the player guessed it right
        }
    } while (guess != secretNumber);

    printf("It took you %d attempts to guess the number.\n", attempts);

	return 0;  //execution successful
}
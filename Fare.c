/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 20 October 2025
Description: A C function that calculates total fare as per the distance travelled.
*/

#include <stdio.h>

// Function prototype
float calculateFare(float distance);

int main() {
    float distance, result;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);
    
    // Function call (only one argument)
    result = calculateFare(distance);
    
    printf("Total fare: Ksh. %.2f\n", result);

    return 0;
}

// Function definition
float calculateFare(float distance) {
    return distance * 50;   // Fare is KSh. 50 per kilometer
}

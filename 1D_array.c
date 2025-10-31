/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 27 October 2025
Description: A 1D array that tracks weekly revenues for a hotel chain. 
*/

#include <stdio.h>

int main() {
    float revenue[7];  // Array to store daily revenues
    float total = 0, average;
    int i;

    // Input daily revenue for 7 days
    printf("Enter revenue for each of the 7 days:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Keep adding to total
    }

    // Calculate average revenue
    average = total / 7.0;

    // Display results
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;  //Execution successful
}

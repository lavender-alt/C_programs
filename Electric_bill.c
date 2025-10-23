/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 20 October 2025
Description: A C function that calculates electric bill and displays the total bill amount.
*/

#include <stdio.h>

// Function prototype
int bill(int units);

int main() {
    int units, result;
    
    // Take user input
    printf("Input number of units consumed: ");
    scanf("%d", &units);
    
    // Function call
    result = bill(units);
    
    // Display result
    printf("The total electric bill is = KSh. %d\n", result);
    
    return 0;
}

// Function definition
int bill(int units) {
    int total_bill;

    if (units <= 100) {
        total_bill = units * 10;
    } else if (units <= 200) {
        total_bill = (100 * 10) + ((units - 100) * 15);
    } else {
        total_bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return total_bill;
}

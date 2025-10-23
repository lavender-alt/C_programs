/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 20 October 2025
Description: A C function that converts temperature in Celsius to Fahrenheit. 
*/

#include <stdio.h>

// Function prototype
float convertToCelsius(float fahrenheit);

int main() {
    float fahrenheit, celsius;

    // Take user input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Function call
    celsius = convertToCelsius(fahrenheit);

    // Display result
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}

// Function definition
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;  // Formula: C = (F - 32) × 5/9
}

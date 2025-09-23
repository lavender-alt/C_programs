/*
Name: Mutua Lavender Mwongeli.
Reg No: CT101/G/26570/25.
Unit: Introduction to programming and problem solving.
Date: 21/09/2025.
Description: A c program to find the volume and height of a cylinder.
*/
#include<stdio.h>
#define pi 3.142
int main () {
	
	//variables declaration
	float Height , Radius , Volume , Surface_area;
	
	//take user input
	printf("Enter radius: \n");
	scanf("%f", &Radius);
	
	printf("Enter height: \n");
	scanf("%f", &Height);
	
	//formulae
	Volume = pi * Radius *Radius * Height;
	Surface_area = 2 * Radius * Radius* pi + 2 * pi * Radius * Height;
	
	//display output
	printf("The volume is %f \n", &Volume);
	printf("The surface area is %f \n", &Surface_area);
	
	return 0;
}
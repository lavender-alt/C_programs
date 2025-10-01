/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 30/09/2025
Description: A C PROGRAM TO CHECK THE NUMBER OF WATER UNITS USED,CALCULATE AND DISPLAY THE TOTAL BILL
*/

#include <stdio.h> //scanf(), printf()

//main function
int main() {
	
	//variables declaration
	float units, Total_water_bill;
	
	//take user input
	printf("Enter the number of water units consumed \t");
	scanf("%f", &units);
	
	if(units <= 30){
		Total_water_bill = 20 * units;   //20 KES per unit 
	}
	else if(units>30 && units<=60){
		Total_water_bill = (25 * units );   //25 KES per unit
	}
	else if(units>60){
		Total_water_bill = (30 * units );   //30 KES per unit
	}
	
	//display output
	printf("The total water bill is KES. %.2f",Total_water_bill);
	
	return 0; //execution successful
}

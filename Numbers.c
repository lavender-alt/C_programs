/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 7/10/2025
Description: A C PROGRAM THAT USES FOR LOOP TO PRINT THE NUMBERS FROM 100 TO 50 IN DESCENDING ORDER 
*/

#include <stdio.h>  //scanf(), printf()

//main function
int main () { 
	printf("Using for loop \n");
	
	//variables declaration
	int i;
	
	//for(start; stop; step){}
	for(i=100; i>=50; i--){
		printf("%d \t", i);
	}
	  	
	return 0;  //execution successful
}
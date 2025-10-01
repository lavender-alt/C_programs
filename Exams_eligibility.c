/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 30/09/2025
Description: A C PROGRAM TO DETERMINE EXAM ELIGIBILITY
*/

#include <stdio.h> //scanf(), printf()

//main function
int main () {
	
	//variables declaration
	int average_marks , attendance;
	
	//take student input
	printf("Enter your average score: \t");
	scanf("%d", &average_marks);
	
	printf("Enter your attendance ( out of 100 ): \t");
	scanf("%d", &attendance);
	
	if(average_marks>=40 && attendance>=75) {
		printf("You are eligible for final exams");
	}
	else if(average_marks<40){
		printf("Not eligible!");		
	}
	else if(attendance<75){
		printf("Not eligible!");
	}
	
	return 0; //execution successful
}
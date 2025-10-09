/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 7/10/2025
Description: A C PROGRAM THAT USES WHILE LOOP TO ENABLE THE USER TO WITHDRAW AMOUNT AND DISPLAYS THE BALANCE AFTER EACH WITHDRAWAL
*/

#include <stdio.h>  //scanf(), printf()

//main function
int main () {
	
	//variables declaration
	int amount;
	int balance = 10000;  //start
	printf("Your current balance is %d \n", balance);
	while (balance>0)  //stop
	{  
		 printf("Input amount you wish to withdraw: \t");
	scanf("%d", &amount);
	balance -= amount;  //step, balance = balance - amount
	printf("Your new balance = %d \n", balance);
	 }
	 printf("Insufficient balance");
	  
	return 0;  //execution successful
}
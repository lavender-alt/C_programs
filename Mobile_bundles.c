/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 30/09/2025
Description: A C PROGRAM TO PURCHASE MOBILE DATA BUNDLES
*/

#include <stdio.h>  //scanf(), printf()

//main function
int main () {
	//variable declaration
	int choice;
	
	//display mobile data bundles menu
	printf("Choose a mobile data bundle: \n");
	printf("1. 100mb - KES 50 \n");
	printf("2. 500mb - KES 200 \n");
	printf("3. 1GB - KES 350 \n");
	printf("4. 2GB - KES 600 \n");
	
	//prompt user to select
	printf("Input your option(1 - 4) \t");
	scanf("%d", &choice);
	
	//switch statement to handle choice
	switch(choice) {
		case 1:
			printf("You have received 100mb mobile bundles. Cost KES 50 \n");
			break;
		case 2:
			printf("You have received 500mb mobile bundles. Cost KES 200 \n");
			break;
		case 3:
			printf("You have received 1GB mobile bundles. Cost KES 350 \n");
			break;
		case 4:
			printf("You have received 2GB mobile bundles. Cost KES 600 \n");
			break;
			default: //instances where the user inputs an invalid choice
				printf("Invalid choice! Please try again and input an option between 1 and 4. \n");
				break;
				
		}
	
	return 0;  //execution successful
}

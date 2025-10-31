/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 27 October 2025
Description: A 3D array to display room occupancy using multiple branches. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];  //3 branches, 5 floors, 10 rooms per floor
    int i, j, k;
    int totalOccupied = 0;

    srand(time(0));  //Initialize random number generator

    //Assign random occupancy (1 or 0) to each room
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;

                if (chain[i][j][k] == 1)
                    totalOccupied++;
            }
        }
    }

    //Display the total occupied rooms across all branches
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;  //Execution successful
}

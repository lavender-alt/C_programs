/*
Name: MUTUA LAVENDER MWONGELI
Reg No: CT101/G/26570/25
Date: 27 October 2025
Description: A 2D array to display room occupancy using one branch. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];  //5 floors, 10 rooms each
    int i, j;
    int occupied, vacant;

    srand(time(0));  //Random number generator

    printf("Room occupancy per floor:\n");

    //Fill the array with random values (1 = occupied, 0 = vacant)
    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        //Display the count for each floor
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }

    return 0;  //Execution successful
}

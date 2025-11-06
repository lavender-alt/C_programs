/* 
Name: James Githahu 
Reg No: CT101/G/26463/25
Description: Program to write and read student examination results from a binary file (results.dat).
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    int totalMarks;
};

int main() {
    FILE *file;
    struct Student s;
    int choice;

    do {
        printf("\n--- STUDENT RESULTS SYSTEM ---\n");
        printf("1. Add new student records\n");
        printf("2. View all student records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1: {
                int n, i;
                file = fopen("results.dat", "ab"); 
                if (file == NULL) {
                    printf("Error opening file!\n");
                    return 1;
                }

                printf("Enter number of students to add: ");
                scanf("%d", &n);
                getchar(); 

                for (i = 0; i < n; i++) {
                    printf("\nEnter name: ");
                    fgets(s.name, sizeof(s.name), stdin);

                    printf("Enter registration number: ");
                    fgets(s.regNo, sizeof(s.regNo), stdin);

                    printf("Enter total marks: ");
                    scanf("%d", &s.totalMarks);
                    getchar(); 

                    fwrite(&s, sizeof(struct Student), 1, file);
                }

                fclose(file);
                printf("\nRecords successfully added!\n");
                break;
            }

            case 2: {
                file = fopen("results.dat", "rb"); 
                if (file == NULL) {
                    printf("Error: No records found (file not created yet).\n");
                    break;
                }

                printf("\n--- STUDENT EXAMINATION RESULTS ---\n");
                while (fread(&s, sizeof(struct Student), 1, file)) {
                    printf("Name: %s", s.name);
                    printf("Reg No: %s", s.regNo);
                    printf("Total Marks: %d\n\n", s.totalMarks);
                }

                fclose(file);
                break;
            }

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "users.h"

int main () {
    int age;
    char tempName[20];
    float height;
    float weight;
    char searchName[20];
    int removeID;
    float avgs[2];
    int editID;
    int newAge;
    char newName[20];
    float newHeight;
    float newWeight;
    int option;
    
    struct LIST originalList[] =  {
        {{1, "Olivia",  29,  1.81,  250.62},  NULL, &originalList[1]},
        {{2, "Emma",  67,  1.88,  257.1},  &originalList[0],  &originalList[2]},
        {{3, "Amelia",  28,  1.5,  247.4},  &originalList[1],  &originalList[3]},
        {{4,  "Sophia",  13,  1.83,  257.1},  &originalList[2],  &originalList[4]},
        {{5, "Charlotte",  87,  1.8,  257.1},  &originalList[3],  &originalList[5]},
        {{6, "Ava",  72,  1.92,  257.1},  &originalList[4],  &originalList[6]},
        {{7, "Isabella",  33,  1.76,  257.1},  &originalList[5],  &originalList[7]},
        {{8, "Mia",  26,  1.98,  257.1},  &originalList[6],  &originalList[8]},
        {{9, "Olivia",  72,  1.63,  257.1},  &originalList[7],  &originalList[9]},
        {{10, "Evelyn",  20,  1.83,  257.1},  &originalList[8],  NULL}
         };
    
    writeCSV("ENEB340.csv", originallist);
    struct LIST *users = readList("ENEB340.csv");
    printList(users);
    
    do {
        printf("Menu: Selection an Option to Perform\n-----------------------------------\n0. Print user list\n1. Count the number of users\n2. Search for a user\n3. Sort list by name\n4. Add a new user\n5. Remove a user\n6. Update user information\n7. Calculate averages\n8. Exit\nEnter selection: ");
        scanf("%d", &option);
        
        switch (option) {
            case 0: 
                printList(users);
                break;
            case 1: 
                printf("\nNumber of users: %d\n", numUsers(users));
                break;
            case 2:
                printf("\nEnter name to search: ");
                scanf("%s", searchName);
                search(users, searchName);
                break;
            case 3: 
                sort(users);
                writeCSV("ENEB340.csv", users);
                break;
            case 4:
                printf("Enter name: ");
                scanf("%s", tempName);
                printf("Enter age:" );
                scanf("%d", &age);
                printf("Enter height: ");
                scanf("%f", &height);
                printf("Enter weight: ");
                scanf("%f", &weight);
                addUser(users,tempName, age, height, weight);
                writeCSV("ENEB340.csv", users);
                break;
            case 5:
                printf("\nEnter ID of user to remove: ");
                scanf("%d", &removeID);
                deleteUser(&users, removeID);
                writeCSV("ENEB340.csv", users);
                break;
            case 6: 
                printf("\nEnter ID of user to edit: ");
                scanf("%d", &editID);
                printf("Enter name: ");
                scanf("%s", newName);
                printf("Enter age:" );
                scanf("%d", &newAge);
                printf("Enter height: ");
                scanf("%f", &newHeight);
                printf("Enter weight: ");
                scanf("%f", &newWeight);
                updateUser(users, editID, newName, newAge, newHeight, newWeight);
                writeCSV("ENEB340.csv", users);
                break;
            case 7:
                averages(users,avgs);
                printf("\nAverage height: %f\nAverage weight: %f\n", avgs[0], avgs[1]);
                break;
            case 8:
                exit(0);
            default:
                printf("Error\n");
            
        }
        
    } while (option != 8);
   
    return 0;
}

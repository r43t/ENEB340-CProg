/*  Reta Gela
    November 16, 2023
    main.c File*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

struct user s[10] = {
    {"Olivia", 29, 1.81, 250.62},
    {"Emma", 67, 1.88, 257.1},
    {"Amelia", 28, 1.5, 247.4},
    {"Sophia", 13, 1.83, 271.03},
    {"Charlotte", 87, 1.8, 105.36},
    {"Ava", 72, 1.92, 114.07},
    {"Isabella", 33, 1.76, 106.93},
    {"Mia", 26, 1.98, 225.74},
    {"Olivia", 20, 1.63, 198.92},
    {"Evelyn", 20, 1.83, 126.25},
};

int main (void) 
{
    int option;
    char searchname[] = {};
    
    struct ListNode* head = NULL;//CHANGE THIS
    do {
        printf("\n\tMAIN MENU:\n");
        printf("------------------------------------\n");
        printf("1. Count the Number of Users\n");
        printf("2. Search for a User\n");
        printf("3. Sort List by Name\n");
        printf("4. Add a New User\n");
        printf("5. Remove a User\n");
        printf("6. Update User Information\n");
        printf("7. Calculate Averages\n");
        printf("8. Exit\n");
        scanf("%d", &option);
        
        if(option == 1) {
            printf("Number of users in the list: %d\n", numofusers(head));
        }
        else if(option == 2) {
            printf("Enter a name to search: ");
            scanf("%s", &searchname);

            searchuser(head, searchname); 
        }
        else if(option == 3) {
            printf("\nSorting the List:\n");
            sortList(&head);
            printList(head);
        }
        else if(option == 4) {
            newuser(&head);
        }
        else if(option == 5) {
            deleteuser(&head);
        }
        else if(option == 6) {
            updateuser(head);
            printList(head);
        }
        else if(option == 7) {
            calcaverage(head);
        }
        else if(option == 8) {
            printf("Exiting Program.\n");
            break;
        }
        else {
            printf("\nInvalid choice. Try again.\n");
        }
    } while(option != 8);
    if(option == 8) {
        return 0;
    }
    freeList(head);
    return 0;
}

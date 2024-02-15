/*  Reta Gela
    November 16, 2023
    Functions.c File*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

struct LIST* createNode(struct user data) {
    struct LIST* newNode = (struct LIST*)malloc(sizeof(struct LIST));
    if (newNode != NULL) {
        newNode->data = data;
        newNode->back = NULL;
        newNode->next = NULL;
    }
    return newNode;
}
void printList(struct LIST* head) {
    struct LIST* current = head;
    while (current != NULL) {
        printf("Name: %s, Age: %d, Height: %.2f, Weight: %.2f\n", 
               current->data.name, current->data.age, 
               current->data.height, current->data.weight);
        current = current->next;
    }
    printf("\n");
}
int numofusers(struct LIST* head)
{
    int i = 0;
    struct LIST* current = head;
    while (current != NULL) {
        i++;
        current = current->next;
    }
    return i;
}
void searchuser(struct LIST* head, const char* name)
{
    char searchname[]={};
    struct LIST* foundUser = searchuser(head, searchname);
    if (foundUser != NULL) {
        printf("User found: %s, Age: %d, Height: %.2f, Weight: %.2f\n",
        foundUser->data.name, foundUser->data.age,
        foundUser->data.height, foundUser->data.weight);
    } else {
        printf("User not found.\n");
    }
}
    
void sortList(struct LIST** head, struct user data)
{
    
    struct LIST* newNode = createNode(data);

    if (newNode != NULL) {
        struct LIST* current = *head;
        struct LIST* prev = NULL;

        while (current != NULL && strcmp(current->data.name, data.name) < 0) {
            prev = current;
            current = current->next;
        }

        if (prev == NULL) {
            newNode->next = *head;
            if (*head != NULL) {
                (*head)->back = newNode;
            }
            *head = newNode;
        } else {
            newNode->next = current;
            newNode->back = prev;
            if (current != NULL) {
                current->back = newNode;
            }
            prev->next = newNode;
        }
    }
}

void newuser(struct LIST** head)
{
    struct user newUser;
    printf("Enter user details:\n");
    printf("Name: ");
    scanf("%s", newUser.name);
    printf("Age: ");
    scanf("%d", &newUser.age);
    printf("Height: ");
    scanf("%f", &newUser.height);
    printf("Weight: ");
    scanf("%f", &newUser.weight);
    sortList(head, newUser);
    printList(*head);
}
void deleteuser(struct LIST** head)
{
    char namedelete[15];
    printf("Enter the name of the user to delete: ");
    scanf("%s", namedelete);
    
    struct LIST* current = *head;
    struct LIST* prev = NULL;

    while (current != NULL && strcmp(current->data.name, namedelete) != 0) {
        prev = current;
        current = current->next;
    }

    if (current != NULL) {
        if (prev == NULL) {
            *head = current->next;
            if (*head != NULL) {
                (*head)->back = NULL;
            }
        } else {
            prev->next = current->next;
            if (current->next != NULL) {
                current->next->back = prev;
            }
        }

        free(current);
        printf("User '%s' deleted.\n", namedelete);
        printlist(*head);
    } else {
        printf("User '%s' not found.\n", namedelete);
    }
}
void updateuser(struct LIST* head) 
{
    char Update[15];
    printf("Enter the name of the user to update: ");
    scanf("%s", Update);

    struct LIST* userNode = searchuser(head, Update);
    if (userNode != NULL) {
        printf("Enter new details for user '%s':\n", Update);
        printf("New Age: ");
        scanf("%d", &userNode->data.age);
        printf("New Height: ");
        scanf("%f", &userNode->data.height);
        printf("New Weight: ");
        scanf("%f", &userNode->data.weight);
        printf("User details updated.\n");
        printlist(head);
    } else {
        printf("User '%s' not found.\n", Update);
    }
}
void calcaverage(struct LIST* head) 
{
    float totalweight = 0.0;
    float totalheight = 0.0;
    int count = 0;

    struct LIST* current = head;
    while(current != NULL) {
        totalweight += current->data.weight;
        totalheight += current->data.height;
        count++;
        current = current->next;
    }
    if(count > 0) {
        float averageweight = totalweight / count;
        float averageheight = totalheight / count;
        printf("\nAverage Weight: %.2f lbs", averageweight);
        printf("\nAverage Height: %.2f meters", averageheight);
    }
    else {
        printf("\nNo users in the list.\n");
    }
}
void freeList(struct LIST* head) 
{
    struct LIST* current = head;
    struct LIST* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

/*while(current != NULL) {
        if(strcmp(current->data.name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL; // If user not found
}*/
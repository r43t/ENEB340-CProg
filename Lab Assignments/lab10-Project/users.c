#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "users.h"

//Function to write list to CSV file
void writeCSV(char* FileName, struct LIST *start){
    FILE *fp;
    struct LIST *ptr = start;
    fp = fopen(FileName, "w");
    while (ptr != NULL){
        fprintf(fp, "%d,%s,%d,%.2f,%.2f\n", ptr->user.ID, ptr->user.name, ptr->user.age, ptr->user.height, ptr->user.weight);
        ptr = ptr-> next;
    }
    fclose(fp);
}

struct LIST* readList(char* FileName) {
    FILE *fp;
    struct LIST *start = NULL;
    struct LIST *ptr = NULL;
    struct LIST *prev = NULL;
    fp = fopen(FileName, "r");

    if (fp == NULL) {
        printf("Error opening file %s\n", FileName);
        return NULL;
    }

    char name[20];
    int ID, age;
    float height, weight;
    
    while (fscanf(fp, "%d,%[^,],%d,%f,%f\n", &ID, name, &age, &height, &weight) == 5) {
        ptr = malloc(sizeof(struct LIST));
        if (ptr == NULL) {
            printf("Memory allocation error\n");
            fclose(fp);
            return NULL;
        }
        
        if (start == NULL) {
            start = ptr;
        }

        strcpy(ptr->user.name, name);
        ptr->user.ID = ID;
        ptr->user.age = age;
        ptr->user.height = height;
        ptr->user.weight = weight;

        ptr->prev = prev;
        ptr->next = NULL;
       
        if (prev != NULL) {
            prev->next = ptr;
        }

        prev = ptr;
    }
    
    


    fclose(fp);
    return start;
}
//Sort user list by name function
void sort(struct LIST *start) {
    int swapped;
    struct LIST *ptr;
    struct LIST *last = NULL;

    // Check for empty list
    if (start == NULL)
        return;

    do {
        swapped = 0;
        ptr = start;

        while (ptr->next != last) {
            if (strcmp(ptr->user.name, ptr->next->user.name) > 0) {
                // Swap nodes
                struct USER temp = ptr->user;
                ptr->user = ptr->next->user;
                ptr->next->user = temp;

                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);
}

//Count number of users function
int numUsers(struct LIST *start) {
    int count = 0;
    struct LIST *ptr = start;
    while (ptr != NULL){
        count++;
        ptr = ptr-> next;
    }
    return count;
}
//Search for a specific user function
void search(struct LIST *start, char name[20]){
    struct LIST *ptr = start;
    while (ptr != NULL) {
        if (strcmp(ptr->user.name, name) == 0)
            printUser(ptr->user);
        ptr = ptr->next;
    }
}
//Remove a user function
void deleteUser(struct LIST **start, int ID){
    struct LIST *ptr = *start;

    while (ptr != NULL && ptr->user.ID != ID) {
        ptr = ptr->next;
    }

   if (ptr == *start) {
        *start = (*start)->next;
   }
    else 
   {
        if ( ptr->prev != NULL)
            ptr->prev->next = ptr->next;
        if ( ptr->next != NULL)
            ptr->next->prev = ptr->prev;
   }
   
   
}
//Update a user's information function
void updateUser(struct LIST *start, int ID, char name[], int age, float height, float weight) {
    struct LIST *ptr = start;

    // Find the user with the specified ID
    while (ptr != NULL && ptr->user.ID != ID) {
        ptr = ptr->next;
    }

    // If user with specified ID is found, update the information
    if (ptr != NULL) {
        strcpy(ptr->user.name, name);
        ptr->user.age = age;
        ptr->user.height = height;
        ptr->user.weight = weight;
    }
}
//Add a new user function
void addUser(struct LIST *start, char name[20], int age, float height, float weight){
    struct LIST *ptr = start;
    struct LIST *prev = start;
    int maxID = 1;
    do {
        prev = ptr;
        if (ptr->user.ID > maxID)
            maxID = ptr->user.ID;
        ptr = ptr->next;
    } while (ptr != NULL);

    struct LIST *new = malloc(sizeof(struct LIST));
    prev->next = new;
    new->user.ID = ++maxID;
    new->next = NULL;
    new->prev = prev;
    new->user.age = age;
    new->user.height = height;
    new->user.weight = weight;
    strcpy(new->user.name, name);
}
//Calculate weight and height averages function
void averages(struct LIST *start, float avgs[2]){
    float sumH = 0, sumW = 0;
    struct LIST *ptr = start;
    while (ptr != NULL) {
        sumH += ptr->user.height;
        sumW += ptr->user.weight;
        ptr = ptr->next;
    }
    
    int num = numUsers(start);
    avgs[0] = sumH / num;
    avgs[1] = sumW / num;
}
//Print contents of a single user
void printUser(struct USER user){
    printf("%-8d%-20s%-10d%-10.2f%8.2f\n", user.ID, user.name, user.age, user.height, user.weight);
}
//Print list of users
void printList(struct LIST *start){
    struct LIST *ptr = start;
    printf("%-8s%-20s%-10s%-10s%9s\n", "ID", "Name", "Age", "Height", "Weight");
    while (ptr != NULL)
    {
        printUser(ptr->user);
        ptr = ptr->next;
    }
}

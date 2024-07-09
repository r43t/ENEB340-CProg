#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "user.h"

// Write list to CSV file
void writeCSV(char* FileName, struct List *head) {
   FILE *fp;
   struct List *ptr = head;  // Correct the case here
   fp = fopen(FileName, "w");
   if(fp == NULL) {
      printf("Error! Could not open file.");
      exit(0);
   }
   while (ptr != NULL) {
      fprintf(fp, "%d,%s,%d,%.2f,%.2f\n", ptr->user.ID, ptr->user.name, ptr->user.age, ptr->user.height, ptr->user.weight);
      ptr = ptr->next;
   }
   fclose(fp);
}
// Read list to CSV file
struct LIST* readCSV(char* FileName) {
   FILE *fp;
   char name[20];
   int ID, age;
   float height, weight;
   
   struct List *head = NULL;
   struct List *prev = NULL;
   struct List *ptr = NULL;
   
   fp = fopen("data.CSV", "r");
   if(fp == NULL) {
      printf("Error! Could not open file.");
      return NULL;
   }
   while(fp != NULL) {
      ptr = malloc(sizeof(struct List));
      fscanf(fp, "%d,%s,%d,%.2f,%.2f", &ID, &name, &age, &height, &weight);
      if(ptr == NULL) {
         printf("Memory Allocation Error\n");
         fclose(fp);
         return NULL;
      }
      if (head == NULL) {
         head = ptr;
      }
      ptr->user.ID = ID;
      strcpy(ptr->user.name, name);
      ptr->user.age = age;
      ptr->user.height = height;
      ptr->user.weight = weight;

      ptr->prev = prev;
      ptr->next = NULL;
      if(prev != NULL) {
         prev->next = ptr;
      }
      prev = ptr;
   }
   fclose(fp);
   return head;
}
// Sort User List by Name
void sortList(struct List *head) {
   
   if (head == NULL) {
      return;
   }
   
   int swap;
   struct List *ptr;
   struct List *last = NULL;

   do {
      swap = 0;
      ptr = head;
      while(ptr->next != last) {
         if(strcmp(ptr->user.name, ptr->next->user.name) > 0) {
            struct User temp = ptr->user;
            ptr->user = ptr->next->user;
            ptr->next->user = temp;
            swap = 1;
         }
         ptr = ptr->next;
      }
      last = ptr;
   } while(swap == 1);
}
// Count number of users 
int countUsers(struct LIST *start) {
   int count = 0;
   struct LIST *ptr = start;
   while (ptr != NULL){
      count++;
      ptr = ptr-> next;
   }
   return count;
}
// Search for a specific user 
void searchUser(struct List *head, char name[20]) {
   struct list *ptr = head;
   while(ptr != NULL) {
      if(strcmp(ptr->user.name, name) == 0) {
         printUser(ptr->user);
      }
      ptr = ptr->next;
   }
}
// Remove a user
void removeUser(struct List **head, int ID) {
   struct List *ptr = *head;

   while (ptr != NULL && ptr->user.ID != ID) {
      ptr = ptr->next;
   }

   if (ptr == *head) {
      *head = (*head)->next;
   }
   else {
      if ( ptr->prev != NULL) { 
         ptr->prev->next = ptr->next;
      }
      if ( ptr->next != NULL) {
         ptr->next->prev = ptr->prev;
      }
   }
}
// Update a user's information
void updateUser(struct List *head, int ID, char name[], int age, float height, float weight) {
   struct List *ptr = head;
   // Find the user with the specified ID
   while (ptr != NULL && ptr->user.ID != ID) {
      ptr = ptr->next;
   }
   // If user is found, update the information
   if (ptr != NULL) {
      strcpy(ptr->user.name, name);
      ptr->user.age = age;
      ptr->user.height = height;
      ptr->user.weight = weight;
   }
}
// Add a new user
void addUser(struct List *head, char name[20], int age, float height, float weight) {
   struct List *ptr = head;
   struct List *prev = head;
   int IDcount = 1;
   do {
      prev = ptr;
      if (ptr->user.ID > IDcount)
         IDcount = ptr->user.ID;
      ptr = ptr->next;
   } while (ptr != NULL);

   struct List *new = malloc(sizeof(struct List));
   prev->next = new;
   new->user.ID = ++IDcount;
   new->next = NULL;
   new->prev = prev;
   new->user.age = age;
   new->user.height = height;
   new->user.weight = weight;
   strcpy(new->user.name, name);
}
// Calculate weight and height averages
void calcAvg(struct List *head, float avgs[2]) {
   float totalheight = 0, totalweight = 0;
   struct List *ptr = head;
   while (ptr != NULL) {
      totalheight += ptr->user.height;
      totalweight += ptr->user.weight;
      ptr = ptr->next;
   }
   int num = countUsers(head);
   avgs[0] = totalheight / num;
   avgs[1] = totalweight / num;
}
// Print contents of a single user
void printUser(struct User user) {
   printf("%d,%-20s,%-10d,%-10.2f,%8.2f\n", user.ID, user.name, user.age, user.height, user.weight);
}
// Print the entire list of users
void printList(struct List *head) {
   struct LIST *ptr = head;
   printf("%-8s%-20s%-10s%-10s%9s\n", "ID", "Name", "Age", "Height", "Weight");
   while (ptr != NULL) {
      printUser(ptr->user);
      ptr = ptr->next;
   }
}

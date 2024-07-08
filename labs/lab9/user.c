#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "user.h"

// Write list to CSV file
void writeCSV(char* FileName, struct List *head) {
   FILE *fp;
   struct List *ptr = head;
   fp = fopen("data.CSV", "w");
   if(fp == NULL) {
      printf("Error! Could not open file.");
      exit(0);
   }
   while(fp != NULL) {
      fprintf(fp, "%d,%s,%d,%.2f,%.2f\n", ptr->user.ID, ptr->user.name, ptr->User.age, ptr->User.height, ptr->User.weight);
      ptr = ptr->next;
   }
   fclose(fp);
}
// Read list to CSV file
struct LIST* readCSV(char* FileName) {
   char name[20];
   int ID, age;
   float height, weight;
   FILE *fp;
   
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
      struct LIST u1;
      u1.user.ID = ID;

   }
}
// Sort User List by Name
void sortList() {

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
void searchUser() {
  
}
// Remove a user
void removeUser() {
  
}
// Update a user's information
void update() {
  
}
// Add a new user
void addUser() {
  
}
// Calculate weight and height averages
void calcUser() {
  
}
// Print contents of a single user
void printUser() {
  
}
// Print the entire list of users
void printList() {
  
}

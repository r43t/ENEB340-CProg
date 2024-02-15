/*  Reta Gela
    November 16, 2023
    Data Structures File*/

#include <stdio.h>

struct user {
    char name [15];
    int age;
    float height;
    float weight;
};

struct LIST {
    struct user data;
    struct LIST *back;
    struct LIST *next;
};

void printList(struct LIST* head);
int numofusers(struct LIST* head);
void searchuser(struct LIST* head, const char* name);
void sortList(struct LIST** head, struct user data);
void newuser(struct LIST** head);
void deleteuser(struct LIST** head);
void updateuser(struct LIST* head);
void calcaverage(struct LIST* head);
void freeList(struct LIST* head);
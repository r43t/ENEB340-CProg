#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"

#define MAX 20

int main (void) 
{
   char name[MAX];
   int ID, age, select;
   float height, weight;

   struct List origin[] = {
      {{1, "Olivia",  29,  1.81,  250.62},  NULL, &origin[1]}, 
      {{2, "Emma",  67,  1.88,  161.1},  &origin[0], &origin[2]},
      {{3, "Amelia",  28,  1.5,  201.4},  &origin[1],  &origin[3]},
      {{4,  "Sophia",  13,  1.83,  155.03},  &origin[2],  &origin[4]},
      {{5, "Charlotte",  87,  1.8,  105.36},  &origin[3],  &origin[5]},
      {{6, "Ava",  72,  1.92,  114.07},  &origin[4],  &origin[6]},
      {{7, "Isabella",  33,  1.76,  106.93},  &origin[5],  &origin[7]},
      {{8, "Mia",  26,  1.98,  156},  &origin[6],  &origin[8]},
      {{9, "Olivia",  72,  1.63,  140.12},  &origin[7],  &origin[9]},
      {{10, "Evelyn",  20,  1.83,  126.25},  &origin[8],  NULL}
      };
   // Initialize CSV file
   writeCSV("data.CSV", origin);
   
   do {
      printf("\t\tUSER FILE DATABASE\n");
      printf("\tMain Menu:\n1. Count Number of Users\n2. Search for a User\n3. Sort Users by Name\n4. Add a New User\n5. Remove a User\n6. Update User Information\n7. Calculate Averages\n8. Exit\n");
      scanf("%d", &select);
      switch (select) {
         case 1:
            printf("Total: %d\n", countUsers(origin));
            break;
         case 2:
            printf("Enter name of user: ");
            scanf("%s", name);
            searchUser(origin, name);
            break;
         case 3:
            sortList(origin);
            writeCSV("data.CSV", origin);
            printList(origin);
            break;
         case 4:
            printf("Enter the name, age, height and weight of new user (separate with spaces): ");
            scanf("%s %d %.2f %.2f", &name, &age, &height, &weight);
            addUser(origin, name, age, height, weight);
            break;
         case 5:
            printf("Enter an ID to remove: ");
            scanf("%d", &ID);
            removeUser(*origin, ID);
            break;
         case 6:
            printf("Enter an ID to update: ");
            scanf("%d", &ID);
            printf("Enter the updated name, age, height and weight: ");
            scanf("%s %d, %.2f %.2f", &name, &age, &height, &weight);
            updateUser(origin, ID, name, age, height, weight);
            break;
         case 7:
            calcAvg(origin, )
            break;
         default:
            printf("Program terminated.");
            return 0;
      }
   
   } while(select != 8);

}
#ifndef User
#define User
#define MAX 20

struct User {
  int ID;
  char name[MAX];
  int age;
  float height;
  float weight;
};

struct List {
  struct User user;
  struct List *prev;
  struct List *next;
};

// Write list to CSV file
void writeCSV(char *FileName, struct List *head);
// Generate linked List from CSV file
struct LIST* readCSV(char* FileName);
// Sort User List by Name
void sortList();
// Count number of users 
int countUsers(struct LIST *start);
// Search or a specific user 
void searchUser();
// Remove a user
void removeUser();
// Update a user's information
void update();
// Add a new user
void addUser();
// Calculate weight and height averages
void calcUser();
// Print contents of a single user
void printUser();
// Print the entire list of users
void printList();

#endif
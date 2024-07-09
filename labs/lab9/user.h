/* Header Function File
*/

struct User {
  int ID;
  char name[20];
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
void sortList(struct List *head);
// Count number of users 
int countUsers(struct List *head);
// Search or a specific user 
void searchUser(struct List *head, char name[20]);
// Remove a user
void removeUser(struct List **head, int ID);
// Update a user's information
void updateUser(struct List *head, int ID, char name[], int age, float height, float weight);
// Add a new user
void addUser(struct List *head, char name[20], int age, float height, float weight);
// Calculate weight and height averages
void calcAvg(struct List *head, float avgs[2]);
// Print contents of a single user
void printUser(struct User user);
// Print the entire list of users
void printList(struct List *head);

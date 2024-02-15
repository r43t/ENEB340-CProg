#ifndef USERS
#define USERS

struct USER 
{
    int ID;        
    char name[20];
    int age;
    float height;
    float weight;
}; 

struct LIST
{
    struct USER user;
    struct LIST *prev;
    struct LIST *next; 
};

//Function to write list to CSV file
void writeCSV(char* FileName, struct LIST *start);
//Function to generate linked List from CSV file
struct LIST* readList(char* FileName);
//Count number of users in linked user list
int numUsers(struct LIST *start);
//Search for a specific user, returns pointer to that user structure
void search(struct LIST *start, char name[20]);
//Sort user list by name in alphabetical order
void sort(struct LIST *start);
//Add a new user to list
void addUser(struct LIST *start, char name[20], int age, float height, float weight);
//Remove a user from list
void deleteUser(struct LIST **start, int ID);
//Update a user's information
void updateUser(struct LIST *start, int ID, char name[], int age, float height, float weight);
//Calculate average weight and height
void averages(struct LIST *start, float avgs[2]);
//Print list of users
void printList(struct LIST *start);
//Print contents of a single user
void printUser(struct USER user);

#endif
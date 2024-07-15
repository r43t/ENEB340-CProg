#include <stdio.h>



struct Genre {
   int ID;
   char name[30];
   struct Genre *prev;
   struct Genre *next;
};

struct Musician {
   int id;                 // unique ID
   char first_name[30];    
   char last_name[30];     // name of artist 
   int albums;             // number of albums
};

struct Library {
   char name[30];
   struct Genre genres[50];
   struct Musician artists[100];
   int musician_count;
   int genre_count;
   int song_count;
};


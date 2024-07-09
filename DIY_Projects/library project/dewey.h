


struct Book {
   char name[100];
   char author[30];
   char published[5];
   char checkedout[11];
};

struct Genre {
   char name[20];
   struct Book b1[100];
};

struct Library {
   char name[30];
   struct Genre genre;
   
};
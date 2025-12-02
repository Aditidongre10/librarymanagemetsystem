#ifndef LIBRARY_H
#define LIBRARY_H

// Structure definition
struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;
};

// Function declarations
void flush();
void addBook();
void viewBooks();
void searchBook();
void deleteBook();
void issueBook();
void returnBook();

#endif

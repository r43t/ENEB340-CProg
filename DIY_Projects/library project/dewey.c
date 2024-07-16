/*
   Library Catalog Project
   Created by: Reta Gela
   Description: A comprehensive utilization of C data structures to build a simulation of a library catalog.
*/
// This file contains all of the data structures and functions used in this project
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   char name[30];
   int founded;
   char *genres;
   int size;
} Library;

typedef struct {
   char name[20];
   char section[20];
   char *books;
   int capacity;
} Genre;

typedef struct {
   char title[50];
   char author[50];
   char format[25];
   int published;
   int pages;
} Book;

// Function to Add Genre

// Function to Remove Genre

// Function to Sort Genre by Name

// Function to Retrieve all Genres in a Section

// Function to Print Genre

// Function to Print Section

// Function t0 Print Library

// Function to Add Book

// Function to Remove/Check Out Book

// Function to Sort Genre by Title

// Function to Print Book


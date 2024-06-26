#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_SIZE 100

// Function prototypes
char* extractVowels(char str[MAX_STR_SIZE]);
char* extractConsonants(char str[MAX_STR_SIZE]);

int main() {
    char str[MAX_STR_SIZE];
    char *vowels, *consonants;

    // Read input string from the user
    printf("Enter a string: ");
    fgets(str, MAX_STR_SIZE, stdin);

    // Remove the newline character if it's there
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Extract vowels and consonants
    *vowels = extractVowels(str);
    *consonants = extractConsonants(str);

    // Print the results
    printf("Vowels: %s\n", vowels);
    printf("Consonants: %s\n", consonants);

    // Free allocated memory
    free(vowels);
    free(consonants);

    return 0;
}

char* extractVowels(char str[MAX_STR_SIZE]) {
    char *vowels = (char*)malloc(MAX_STR_SIZE * sizeof(char));
    int index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels[index++] = c;
        }
    }
    vowels[index] = '\0';
    return vowels;
}

char* extractConsonants(char str[MAX_STR_SIZE]) {
    char *consonants = (char*)malloc(MAX_STR_SIZE * sizeof(char));
    int index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                  c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
                consonants[index++] = c;
            }
        }
    }
    consonants[index] = '\0';
    return consonants;
}

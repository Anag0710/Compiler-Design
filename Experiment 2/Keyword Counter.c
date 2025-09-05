//WAP in c to count total no of keywords in a file.
#include <stdio.h>
#include <string.h>

#define MAX_KEYWORDS 100

int isKeyword(char *str) {
    // List of keywords in C
    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "register", "return", "short", "signed", "sizeof", "static",
        "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while",
        NULL
    };

    for (int i = 0; keywords[i] != NULL; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1;  // Found a keyword
        }
    }
    return 0;  // Not a keyword
}

int main() {
    FILE *file;
    char word[100];
    int keywordCount = 0;

    // Open the file
    file = fopen("Test.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read words from the file
    while (fscanf(file, "%s", word) == 1) {
        if (isKeyword(word)) {
            keywordCount++;
        }
    }

    // Close the file
    fclose(file);

    printf("Total keywords found: %d\n", keywordCount);
    return 0;
}

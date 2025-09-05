//Write a C program to identify whether the given string is a keyword or not. input by user
#include <stdio.h>
#include <string.h>

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
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isKeyword(str)) {
        printf("%s is a keyword.\n", str);
    } else {
        printf("%s is not a keyword.\n", str);
    }

    return 0;
}
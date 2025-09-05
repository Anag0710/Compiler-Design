//WAP to count no. of operators in a file.
#include <stdio.h>
#include <string.h>

#define MAX_OPERATORS 100

int isOperator(char c) {
    // List of operators in C
    const char operators[] = "+-*/%=&|^!<>?";
    for (int i = 0; i < strlen(operators); i++) {
        if (c == operators[i]) {
            return 1;  // Found an operator
        }
    }
    return 0;  // Not an operator
}

int main() {
    FILE *file;
    char ch;
    int operatorCount = 0;

    // Open the file
    file = fopen("Test.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read characters from the file
    while ((ch = fgetc(file)) != EOF) {
        if (isOperator(ch)) {
            operatorCount++;
        }
    }

    // Close the file
    fclose(file);

    printf("Total operators found: %d\n", operatorCount);
    return 0;
}

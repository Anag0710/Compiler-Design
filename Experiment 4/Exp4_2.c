// Write a Program in C to count Total characters, words and lines in a file.
#include<stdio.h>
int main()
{
    FILE *file;
    char character;
    int chars = 0, words = 0, lines = 0;

    // Try to open the file
    file = fopen("Test.txt", "r");
    if (file == NULL) {
        printf("Sorry, couldn't open the file!\n");
        return 1;
    }

    // Read file character by character
    while((character = fgetc(file)) != EOF) {
        chars++;
        // Count words when we see space, tab or newline
        if(character == ' ' || character == '\n' || character == '\t') {
            words++;
        }
        // Count lines when we see newline
        if(character == '\n') {
            lines++;
        }
    }

    // Handle last word and line
    if(chars > 0) {
        words++;
        lines++;
    }

    // Show results
    printf("Found %d characters\n", chars);
    printf("Found %d words\n", words);
    printf("Found %d lines\n", lines);

    fclose(file);
    return 0;
}
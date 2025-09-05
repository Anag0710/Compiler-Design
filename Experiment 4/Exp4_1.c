#include<stdio.h>
int main()
{
    FILE *fp;
    char ch, r;
    int count = 0;
    printf("Enter the character to find: ");
    scanf(" %c", &r);
    
    fp = fopen("Test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    while((ch = fgetc(fp)) != EOF) {
        if(ch == r)
            count++;
    }

    printf("The character '%c' appears %d times\n", r, count);
    fclose(fp);
    return 0;
}
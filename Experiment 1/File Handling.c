//write data in a file
#include<stdio.h>
int main()
{
    FILE *file;
    // Open file in write mode
    file = fopen("Test.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    // Write data to the file
    fprintf(file, "In today's fast-paced world, technology is evolving at an unprecedented rate. From artificial intelligence to quantum computing, advancements are reshaping industries and transforming everyday life. As we continue to integrate these technologies into our routines, it's crucial to understand their implications on society and adapt accordingly. The rapid pace of development requires continuous learning and adaptation, ensuring we remain competitive in an increasingly digital landscape. Despite potential concerns, the benefits of technological progress far outweigh the drawbacks.\n");
    
    // Close the file
    fclose(file);
    printf("Data written to file successfully.\n");
    return 0;
}
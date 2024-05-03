#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int age;
    printf("Enter your name: ");
    fgets(str, 1000, stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    str[strcspn(str, "\n")] = '\0';
    FILE *file;
    file = fopen("problem_5.txt", "a");
    if (file == NULL)
    {
        printf("File does not exist.\n");
    }
    else
    {
        printf("File is open.\n");
        fprintf(file, "Name: %s\nAge: %d\n", str, age);
        printf("File is written successfully.\n");
        fclose(file);
    }
    return 0;
}
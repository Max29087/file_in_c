/*
    How to write or read something on file (Add With previous data).
*/
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    printf("\n---Input---\n=>: ");
    fgets(str1, 1000, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    int len =  strlen(str1);
    FILE *test;
    test = fopen("Problem_2.txt", "a");
    if (test == NULL)
    {
        printf("File dose not exist\n");
    }
    else
    {
        printf("File is opene\n");
        for (int i = 0; i <len; i++)
        {
            fputc(str1[i],test);
        }
        printf("File is written successfully.\n");
        fclose(test);
    }
    return 0;
}
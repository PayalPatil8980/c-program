#include <stdio.h>

int main()
{
    FILE *ptr;
    char string[50];
    ptr = fopen("abc.txt", "w");
    gets(string);
    fprintf(ptr, "%s", string);
    fclose(ptr);
    /*ptr = fopen("abc.txt", "r");

    while (fscanf(ptr, "%s", string) != EOF)
    {   
        printf("%s", string);
    }
    fclose(ptr);*/
    return 0;
}
#include <stdio.h>

void sum()
{
    printf("******************\n");
    int a, b;
    printf("Enter the a:");
    scanf("%d", &a);
    printf("Enter the b:");
    scanf("%d", &b);
    int total = a + b;
    printf("Sum is:%d", total);
}

void sub()
{
    printf("******************\n");
    int a, b;
    printf("Enter the a:");
    scanf("%d", &a);
    printf("Enter the b:");
    scanf("%d", &b);
    int total = a - b;
    printf("Sum is:%d", total);
}

void mul()
{
    printf("******************\n");
    int a, b;
    printf("Enter the a:");
    scanf("%d", &a);
    printf("Enter the b:");
    scanf("%d", &b);
    int total = a * b;
    printf("Sum is:%d", total);
}

void div()
{
    printf("******************\n");
    int a, b;
    printf("Enter the a:");
    scanf("%d", &a);
    printf("Enter the b:");
    scanf("%d", &b);
    int total = a / b;
    printf("Sum is:%d", total);
}

int main()
{
    int n;
    printf("Press 1 for sum\n");
    printf("Press 2 for sub\n");
    printf("Press 3 for mul\n");
    printf("Press 4 for div\n");

    printf("Enter your choice:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        sum();
        break;

    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    default:
        break;
    }
}
#include <stdio.h>
int fibo(int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n, i;
    printf("Enter the value of a:");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d : \n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d", fibo(i));
    }
}



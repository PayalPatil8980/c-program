#include <stdio.h>
/*int main(){
    int a=10;

    printf("%d\n",&a);
    int *ptr;
    ptr=&a;
    printf("store address %d\n",ptr);
    printf("store value %d\n",*ptr);
    printf("Pointer address %d\n",&ptr);
}*/

int main()
{
    int a = 10, b = 20;
    int *ptr1;
    int *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    
    *ptr1 = *ptr1 - *ptr2;

    printf("after swapping %d %d", *ptr1, *ptr2);
}
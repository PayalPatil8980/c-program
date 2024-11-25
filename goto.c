#include <stdio.h>

int main()
{

    for (int i = 1; i < 10; i++){
    if(i==5){
            goto next;
    }printf("%d\t",i);
    }

    next:printf("\n");

for(int i=51;i<60;i++){
    printf("%d\t",i);
    }
}
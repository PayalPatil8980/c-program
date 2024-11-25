// Online C compiler to run C program online
#include <stdio.h>

int marks1=10;
int marks2=30;
int marks3=30;
int total;
float per1;

int getmarks(){
    
    total=marks1+marks2+marks3;
    return total;
}

int per(){
    total=getmarks();
    per1=total/3;
    return per1;
}
void printmarks(){
    per1=per();
    printf("Total: %d\n",total);
    printf("Per: %f\n",per1);
}
int main() {
   
  
    printmarks();
    return 0;
}
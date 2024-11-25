#include<stdio.h>

struct student
{
    int rollnum;
    int marks[3];
    int total;
    float per;

};
int main(){
    struct student s1[2];
    for(int i=0;i<2;i++){
        s1[i].total=0;
        s1[i].per=0;

        printf("Enter roll number: ");
        scanf("%d",&s1[i].rollnum);

        printf("Enter the marks: ");
        for(int j=0;j<3;j++){
            scanf("%d",&s1[i].marks[j]);
        }
        for(int j=0;j<3;j++){
            s1[i].total+=s1[i].marks[j];
        }
        s1[i].per=s1[i].total/3;
        printf("Rollnumer :is %d\n",s1[i].rollnum);
        printf("Total is :%d\n",s1[i].total);
        printf("Per is :%f\n",s1[i].per);
    }
}
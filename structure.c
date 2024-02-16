#include<stdio.h>
#include<conio.h>

struct student
{
    int rollno;
    char name[30];
    int class;
};
int main()
{
    struct student x;
   printf("Enter the rollno,Name and class of the student:");
   scanf("%d%s%d",&x.rollno,x.name,&x.class);
   printf("%d\t%s\t%d",x.rollno,x.name,x.class);
   return 0;
}

#include<stdio.h>
struct student
{
    int rollno;
    char name[30];
    int mark[3];
};
 
int main()
{
    struct student S[3],temp;
    int i,j,sum;
    float avg;

    for(i=0; i<3; i++)
    {
        printf("Enter the rollno,name and mark of 3 subjects for the %dth student:\n",i+1);
        scanf("%d%s",&S[i].rollno,S[i].name);
        for(j=0; j<3; j++)
        scanf("%d",&S[i].mark[j]);
    }
    for(i=0; i<3-1; i++)
    for(j=0; j<3-i-1; j++)
    {
        if(strcmp(S[j].name,S[j+1].name)>0)
        {
            temp=S[j];
            S[j]=S[j+1];
            S[j+1]=temp;
        }
    }
    for(i=0; i<3; i++)
    {
        sum=0;
        for(j=0; j<3; j++)
        {
        sum =sum+S[i].mark[j];
        }
        avg=(float)sum/3;
        printf("%d\t%s\t%3.2f\n",S[i].rollno,S[i].name,avg);
    }
}
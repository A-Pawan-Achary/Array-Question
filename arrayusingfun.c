#include<stdio.h>
#include<conio.h>
int main()
{
    int A[10],s,i;
    int sum(int[5]);
    printf("Enter the elements into the array:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&A[i]);
        s=sum(A);
    }
    printf("Sum of array elements:%d",s);
}
int sum(int B[5])
{
int a=0,i;
for(i=0; i<5; i++)
{
    a=a+B[i];
}
return(a);
}
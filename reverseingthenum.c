#include<stdio.h>
#include<conio.h>
int main()
{
    int no1[5],no2[5],rev=0,i,n,temp,old;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("\n Enter the elements of the array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&no1[i]);
    }
    for(i=0; i<n; i++)
    {
        rev=0;
        old=no1[i];
        while(no1[i]>0)
        {
            temp=no1[i]%10;
            rev=rev*10+temp;
            no1[i]=no1[i]/10;
        }
        no2[i]=rev;
        no1[i]=old;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t",no1[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",no2[i]);
    }
    return 0;
}
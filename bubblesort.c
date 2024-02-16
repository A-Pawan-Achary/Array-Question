#include<stdio.h>
int main()
{
    int A[50],temp,n,i,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elemnets in to array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<(n-1); i++)
    for(j=0; j<(n-i-1); j++)
    if(A[j]<A[j+1])
    {
        temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
    }
    printf("The sorted array\n");
    for(i=0; i<n; i++)
    printf("%d\n",A[i]);
    return 0;
}
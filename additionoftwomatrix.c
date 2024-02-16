#include<stdio.h>
#include<conio.h>
int main()
{
    int A[10][10],B[10][10],i,j,m,n,sum[10][10];
    printf("Enter the rows and columns:");
    scanf("%d%d",&m,&n);
    printf("Enter 1st the elements:");
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    scanf("%d",&A[i][j]);
    printf("Enter 2nd the elements:");
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    scanf("%d",&B[i][j]);
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    sum[i][j]=A[i][j] + B[i][j];
    printf("Addittion of matrix:\n");
    for(i=0; i<m; i++){
    for(j=0; j<n; j++)
    printf("%d\t",sum[i][j]);
    printf("\n");

    }
    return 0;
}


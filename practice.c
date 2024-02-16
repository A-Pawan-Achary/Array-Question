#include<stdio.h>
int main()
{
    int matrix[10][10],transpose[10][10],final[10][10],i,j,m,n;
    printf("Enter the rows and columns:");
    scanf("%d%d",&m,&n);
    printf("Enter  the elements");
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    scanf("%d",matrix[i][j]);
    printf("Enter  the elements");
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    final[i][j]=matrix[i][j] + transpose[i][j];
    
    
}
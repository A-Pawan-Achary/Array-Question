#include<stdio.h>
#include<conio.h>
int main()
{
    int matrix[10][10],transpose[10][10],i,j,m,n;
    printf("Enter the rows and columns:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements:");
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    scanf("%d",&matrix[i][j]);
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    transpose[j][i]=matrix[i][j];
    printf("Transpose of matrix:\n");
    for(i=0; i<n; i++){
    for(j=0; j<m; j++)
    
        printf("%d\t",transpose[i][j]);
        printf("\n");
    }
    return 0;
}
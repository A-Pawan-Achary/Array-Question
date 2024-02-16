#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int sp[4][3],ss[4],Is[3],i,j;
    for(i=0; i<4; i++)
    for(j=0; j<3; j++)
    {
         printf("Enter the item %d sold by sales person %d\n",i+1,j+1);
         scanf("%d",&sp[i][j]);
         for(i=0; i<=3; i++)
         ss[i]=sp[i][0]+sp[i][1]+sp[i][2];
         for(i=0; i<=2; i++)
         Is[i]=sp[0][i]+sp[1][i]+sp[2][i]+sp[3][i];
         printf("Item wise sales sum\n");
         for(i=0; i<=2; i++)
         printf("Item %d is sold %d quantity\n",i+1,Is[i]);
         printf("Salesperson wise sum\n");
         printf("--------------------------\n");
         for(i=0; i<=3; i++)
         printf("salesperson %d is sold %d quantity\n",i+1,ss[i]);
     }

         
}


#include<stdio.h>

int bionomial_coefficient (int n,int r)
{
    if(r==0)
    return 1;
    if(r==n)
    return 1;
    if(r<n)
    return(bionomial_coefficient(n-1,r) + bionomial_coefficient(n-1,r-1));
}
int main()
{
    int n=5,r=2;
    printf("%d",bionomial_coefficient(n,r));
}
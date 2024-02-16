#include<stdio.h>
int factorial(int n){
    if(n==0)
    return 1;
    else
    return (n * factorial(n-1));
}
int main()
{
    int L,n;
    int factorial(int);
    L=factorial(10);
    printf("factorial=%d",L);

    return 0;
}
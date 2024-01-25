#include<stdio.h>

int fact(int x);

int main()
{

    long long int n,r;
    printf("Enter the value of n :");
    scanf("%lld",&n);
    printf("Enter the value of r :");
    scanf("%lld",&r);

    if(n<r)
    {
         printf("The %lldC%lld is: %d",n,r,0);
        return 1;
    }

    long long int nCr=fact(n)/(fact(n-r)*fact(r));

    printf("The %lldC%lld is: %lld",n,r,nCr);

    return 0;
}

int fact(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }

    else
    {
        return x*fact(x-1);
    }
}

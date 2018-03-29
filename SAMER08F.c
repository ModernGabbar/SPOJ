#include<stdio.h>

int main()
{
    long long int n,r;
    scanf("%lld",&n);
    while(n!=0)
    {
        r = (n*(n+1)*((2*n)+1))/6;
        printf("%lld\n",r);
        scanf("%lld",&n);
        r=0;
    }
    printf("\n");
    return 0;
}

#include<stdio.h>

int main()
{
    long long int t,n,m,k;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lld",&n);
        m = (n*(n+2)*(2*n+1))/8;
        printf("%lld\n",m);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    long long int tr_zero,k,t,n;

    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        tr_zero=0;
        scanf("%lld",&n);
        while(n > 0)
        {
            tr_zero += n/5;
            n /= 5;
        }
        printf("%lld\n",tr_zero);
    }
    return 0;
}

#include<stdio.h>

long long int gcd(long long int m, long long n)
{
    if(m%n == 0)
        return n;
    else
        return gcd(n, m%n);
}

int main()
{
    int t,flag;
    scanf("%d",&t);
    while(t--)
    {
        flag = 0;
        long long int a,b,g,t;
        scanf("%lld%lld",&a,&b);
        if(a < b)
        {
            t = a;
            a = b;
            b = t;
            flag = 1;
        }
        g = gcd(a,b);
        if(flag == 1)
            printf("%lld %lld\n",a/g,b/g);
        else
            printf("%lld %lld\n",b/g,a/g);
    }
    return 0;
}

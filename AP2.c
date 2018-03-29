#include<stdio.h>

typedef long long int var;

int main()
{
    var t,i,k,n,a,d,a3,a3l,S;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lld%lld%lld",&a3,&a3l,&S);
        n = (2*S)/(a3+a3l);
        d = (a3l-a3)/(n-5);
        a = a3-(2*d);
        printf("%lld\n",n);
        for(i=0;i<n;i++)
        {
            printf("%lld ",(a+i*d));
        }
    }
    return 0;
}

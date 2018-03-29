#include<stdio.h>

typedef long long int var;

var f(n)
{
    var n2,n3,n4;
    if(n<12)
    {
        return n;
    }

    n2 = n/2;
    n3 = n/3;
    n4 = n/4;
    if(n2+n3+n4 > n)
    {
        return f(n2)+f(n3)+f(n4);
    }
    else
    {
        return n;
    }
}

int main()
{
    var num,t=0;
    while(t<10)
    {
        scanf("%lld",&num);
        printf("%lld\n\n",f(num));
        t++;
    }
}

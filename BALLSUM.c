#include<stdio.h>

typedef long long int var;

var gcd(var m,var n)
{
    var temp;
    if(m<n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    if(m%n != 0)
    {
        return gcd(n,m%n);
    }
    else
    {
        return n;
    }
}

int main()
{
    var n,k,p,q,i;
    while(1)
    {
        scanf("%lld%lld",&n,&k);
        if(k == -1)
        {
            break;
        }
        else if(k<3)              //Not possible
        {
            printf("0\n");
            continue;
        }
        else if(n<2)              //Invalid input
        {
            printf("1/0\n");
            continue;
        }
        else
        {
            if(k%2 == 0)           //Total favorable cases
            {
                p = (k/2)*((k/2)-1);
            }
            else
            {
                p = (k-1)/2;
                p = p*p;
            }

            q = n*(n-1)/2;       //Total possible cases
            if(p>=q)             //probability > 1
            {
                printf("1\n");
                continue;
            }
            i = gcd(p,q);
            printf("%lld/%lld\n",p/i,q/i);
        }
    }
    return 0;
}

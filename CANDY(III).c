#include<stdio.h>

typedef long long int var;

int main()
{
    var t,n,c,sum,i;
    scanf("%lld",&t);
    while(t>0)
    {
        sum = 0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&c);
            sum = (sum + c)%n;
        }
        if(sum)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        t--;
    }
    return 0;
}

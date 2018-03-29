#include<stdio.h>

int is_prime(int num)
{
    int i;
    for(i=2;i*i<=num;i++)
    {
        if(num%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,count;
        scanf("%lld",&n);
        if(n==0 || n==1)
        {
            printf("%lld\n",n);
        }
        else if(is_prime(n) == 1)
        {
            printf("%lld\n",n-1);
        }
        else
        {
            count = n;
            for(i=2;i*i<=n;i++)
            {
                if(n%i == 0)
                {
                    count -= count/i;
                    while(n%i == 0)
                        n /= i;
                }
            }
            if(n > 1)
                count -= count/n;
            printf("%lld\n",count);
        }
    }
    return 0;
}

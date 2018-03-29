#include<stdio.h>
#define LL long long int

int check(LL n)
{
    LL a[100],sum;
    int i,r,count=0;
    while(1)
    {
        sum = 0;
        while(n > 0)
        {
            r = n%10;
            sum += r*r;
            n /= 10;
        }
        a[count] = sum;
        count++;

        if(sum == 1)
        {
            return count;
        }
        for(i=0;i<count-1;i++)
        {
            if(sum == a[i])
                return -1;
        }
        n = sum;
    }
}

int main()
{
    LL n;
    scanf("%lld",&n);
    printf("%d\n",check(n));
    return 0;
}

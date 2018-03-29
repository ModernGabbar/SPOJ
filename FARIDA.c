#include<stdio.h>
#define LL long long int
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)

int main()
{
    int t,k=1;
    scanf("%d",&t);
    while(k<=t)
    {
        LL i,n,a[10010],dp[10010];;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        dp[0]=a[0]; dp[1]=MAX(a[0],a[1]);
        for(i=2;i<n;i++)
        {
            dp[i] = MAX(a[i]+dp[i-2], dp[i-1]);
        }

        printf("Case %d: %lld\n",k,dp[n-1]);
        k++;
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
    char n[5009];
    scanf("%s",&n);
    while(n[0]!='0')
    {
        long long int dp[5009];
        int i,a,b,len=strlen(n);
        dp[0] = dp[1] = 1;
        for(i=2;i<=len;i++)
        {
            dp[i]=0;
            a = n[i-2]-'0';
            b = n[i-1]-'0';
            if(a==1 || (a==2 && b<=6))
                dp[i] += dp[i-2];
            if(b!=0)
                dp[i] += dp[i-1];
        }
        printf("%lld\n",dp[len]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        long long int term,n=1,i=1;
        scanf("%lld",&term);
        if(term <= 1)
        {
            printf("TERM %lld IS 1/1\n",term);
            continue;
        }
        while(n < term)
        {
            i++;
            n += i;
        }
        x = n-term+1;
        y = i-x+1;
        if(i%2 == 0)
            printf("TERM %lld IS %d/%d\n",term,y,x);
        else
            printf("TERM %lld IS %d/%d\n",term,x,y);
    }
    return 0;
}

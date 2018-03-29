#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m;
        char s;

        scanf("%lld%s%lld",&n,&s,&m);
        while(1)
        {
            if(s == '+')
            {
                n = n + m;
            }
            else if(s == '-')
            {
                n = n - m;
            }
            else if(s == '*')
            {
                n = n * m;
            }
            else if(s == '/' && n == 0)
            {
                n = 0;
            }
            else
            {
                n = n / m;
            }

            scanf("%s",&s);

            if(s == '=')
            {
                printf("%lld\n",n);
                break;
            }
            else
                scanf("%lld",&m);
        }
    }
    return 0;
}

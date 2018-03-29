#include<stdio.h>
int main()
{
    int t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        long long int a,b;
        int r,res=1;
        scanf("%lld%lld",&a,&b);
        r = a%10;
        if(b==0)
        {
            printf("1\n");
        }
        else if(r==0 || r==1)
        {
            printf("%d\n",r);
        }
        else
        {
            b=b%4;
            if(b==0)
                b=4;
            while(b--)
            {
                res = (res*r)%10;
            }
            printf("%d\n",res);
        }
    }
    return 0;
}

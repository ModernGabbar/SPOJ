#include<stdio.h>

typedef long long int var;

int main()
{
    var t,k,i,m;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        var a[5000],t,n,tmp1;
        i=0;
        scanf("%lld",&n);
        tmp1 = n;

        while(tmp1 > 0)
        {
            a[i] = tmp1%10;
            tmp1 /= 10;
            i++;
        }
        m = i;

        var tmp2,index,x=0;
        for(i=2;i<n;i++)
        {
            tmp2 = 0;
            for(index=0;index<m;index++)
            {
                x = a[index]*i + tmp2;
                a[index] = x%10;
                tmp2 /= 10;
            }
            while(tmp2 != 0)
            {
                a[index] = tmp2%10;
                tmp2 /= 10;
                index++;
            }
            m = index;
        }
    }
    for(i=m-1;i>=0;i--)
    {
        printf("\n");
    }
    return 0;
}

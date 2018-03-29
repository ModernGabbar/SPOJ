#include<stdio.h>

int sort(int *p,int len)
{
    int i,pos,temp;
    for(i=1;i<len;i++)
    {
        pos = i;
        while(pos>0 && *(p+pos)<*(p+pos-1))
        {
            temp = *(p+pos);
            *(p+pos) = *(p+pos-1);
            *(p+pos-1) = temp;
            pos--;
        }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m[1000],f[1000],i,n,sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&m[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&f[i]);
        }

        sort(m,n); sort(f,n);

        for(i=0;i<n;i++)
        {
            sum += m[i]*f[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}

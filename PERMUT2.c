#include<stdio.h>

int main()
{
    long int n,i,a[100000],b[100000];
    scanf("%ld",&n);
    while(n != 0)
    {
        int flag=1;
        for(i=1;i<=n;i++)
        {
            scanf("%ld",&a[i]);
            b[a[i]] = i;
        }
        for(i=1;i<=n;i++)
        {
            if(a[i] != b[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
            printf("not ambiguous\n");
        }
        else
        {
            printf("ambiguous\n");
        }
        scanf("%ld",&n);
    }
    return 0;
}

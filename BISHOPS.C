#include<stdio.h>

int main()
{
    long long int n,i;
    i = 0;
    while(i < 1024)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("1\n");
        }
        else if(n>1)
        {
            printf("%lld\n",2*(n-1));
        }
        i++;
    }
    return 0;
}

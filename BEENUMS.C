#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    while(n != -1)
    {
        j = 1;
        for(i=0;j<=n;i=i+6)
        {
            j = j + i;
            if(j == n)
            {
                printf("Y\n");
                goto again;
            }
        }
        printf("N\n");
        again:
            scanf("%d",&n);
    }
    return 0;
}

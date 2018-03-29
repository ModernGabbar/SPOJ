#include<stdio.h>

int main()
{
    unsigned int t,a[10000],i,j,temp,sum,move;
    scanf("%d",&t);
    while(t!=-1)
    {
        sum=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
            sum += a[i];
        }
        temp = sum/t;

        move = 0;
        if(temp*t == sum)
        {
            for(j=0;j<t;j++)
            {
                if(temp > a[j])
                {
                    move += temp-a[j];
                }
            }
            printf("%d\n",move);
        }
        else
        {
            printf("-1\n");
        }
        scanf("%d",&t);
    }
    return 0;
}

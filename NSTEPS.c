#include<stdio.h>

int main()
{
    int t,x,y,i,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        if(x-y == 2)
        {
             if(x%2 == 0)
                r = x+y;
                printf("%d",r);
            else
                r = x+y-1;
                printf("%d",r);

        }
        else if(x == y)
        {
            if(x%2 == 0)
                r = 2*x;
                printf("%d",r);
            else
                r = (2*x) - 1;
                printf("%d",r);
        }
        else
        {
            printf("No Number\n");

        }
    }
    return 0;
}

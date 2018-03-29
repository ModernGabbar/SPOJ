#include<stdio.h>

int main()
{
    int t,n1,n2,n3,res,k;
    scanf("%d%d%d",&n1,&n2,&n3);
    while((n1!=0) || (n2!=0) || (n3!=0))
    {
        while(n1==n2 || n2==n3)
        {
            scanf("%d%d%d",&n1,&n2,&n3);
        }
        if((n2-n1) == (n3-n2))
        {
            res = 2*n3 - n2;
            printf("AP %d\n",res);
        }
        else
        {
            res = (n3*n3)/n2;
            printf("GP %d\n",res);

        }
        scanf("%d%d%d",&n1,&n2,&n3);
    }
    return 0;
}

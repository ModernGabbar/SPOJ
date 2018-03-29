#include<stdio.h>

int n[100],f[100][100];

int comp(int num,int i_max,int j_max,int row)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
        if(f[i][0] == num)
        {
            return 1;
        }
    }
    for(i=1;i<=i_max;i++)
    {
        for(j=1;j<=n[i];j++)
        {
            if(i==i_max && j==j_max)
            {
                break;
            }
            else if(f[i][j] == num)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int t,i,j,sum=0,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&f[i][0],&n[i]);
        for(j=1;j<=n[i];j++)
        {
            scanf("%d",&f[i][j]);
        }
        sum += n[i];
    }

    for(i=1;i<=t;i++)
    {
        for(j=1;j<=n[i];j++)
        {
            count += comp(f[i][j],i,j,t);
        }
    }
    printf("%d",(sum-count));
    return 0;
}

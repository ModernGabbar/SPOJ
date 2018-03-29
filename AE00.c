#include<stdio.h>
#include<math.h>

int main()
{
    int n,r,i,j,sq,count=0;
    scanf("%d",&n);
    sq=sqrt(n);
    for(i=1;i<=sq;i++)
    {
        for(j=i+1;i*j<=n;j++)
        {
            count++;
        }
    }
    printf("%d",count+sq);
    return 0;
}

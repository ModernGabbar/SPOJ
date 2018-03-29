#include<stdio.h>
#include<math.h>

unsigned int a[100000],k=0;

int is_prime(unsigned int num)
{
    unsigned int i=2,flag=1;
    if(num < 2)
    {
        flag = 0;
        return 0;
    }
    while(i <= sqrt(num))
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag == 1)
    {
        a[k]=num; k++;
    }
}

int main()
{
    unsigned int t,MIN,MAX,i,j,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&MIN,&MAX);
        for(j=MIN;j<=MAX;j++)
        {
            is_prime(j);
        }
        a[k]=0; k++;
    }
    for(l=0;l<k;l++)
    {
        if(a[l] != 0)
        {
            printf("%d\n",a[l]);
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}

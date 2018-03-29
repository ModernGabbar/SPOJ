#include<stdio.h>

unsigned int a[1000];

int sort(unsigned int *p,int len)
{
    int i,j;
    unsigned int temp;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(*(p+i) < *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    return 0;
}

int main()
{
    int t,i,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        unsigned int n,sum_need,sum_done=0,sum_total=0,count=0;
        scanf("%d%d",&sum_need,&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum_total += a[i];
        }

        if(sum_need > sum_total || sum_total == 0)
        {
            printf("Scenario #%d:\nimpossible\n",k);

        }
        else
        {
            sort(a,n);
            while(sum_done < sum_need)
            {
                sum_done += a[count];
                count++;
            }
            printf("Scenario #%d:\n%d\n\n",k,count);
        }
    }
    return 0;
}

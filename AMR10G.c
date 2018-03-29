#include<stdio.h>

int quickSort(long long int *p, int l, int r)
{
    int yellow, green, temp;
    if(r-l <= 1)
        return 0;

    yellow = l+1;
    for(green=l+1;green<r;green++)
    {
        if(*(p+green) < *(p+l))
        {
            temp = *(p+green);
            *(p+green) = *(p+yellow);
            *(p+yellow) = temp;
            yellow++;
        }
    }
    temp = *(p+l);
    *(p+l) = *(p+yellow-1);
    *(p+yellow-1) = temp;
    quickSort(p,l,yellow-1);
    quickSort(p,yellow,r);
    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,j;
        long long int min,tmp,h[20010];
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&h[i]);
        }
        if(k == 1)
        {
            printf("0\n");
            continue;
        }

        quickSort(h,0,n);

        if(k == n)
        {
            printf("%lld\n",(h[n-1]-h[0]));
            continue;
        }
        min = h[k-1]-h[0];
        for(i=1;i<n-k+1;i++)
        {
            if(min > (tmp=h[i+k-1]-h[i]))
                min = tmp;
        }
        printf("%lld\n",min);
   }
   return 0;
}

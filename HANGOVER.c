#include<stdio.h>

int main()
{
    float n,sum,t;
    scanf("%f",&n);
    while(n != 0.00)
    {
        sum = 0; t = 2;
        while(sum < n)
        {
            sum += 1/t;
            t++;
        }
        printf("%.0f card(s)\n",t-2);
        scanf("%f",&n);
    }
    return 0;
}

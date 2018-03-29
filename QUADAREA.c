#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double s,a,b,c,d,k;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        s = (a+b+c+d)/2;
        k = (s-a)*(s-b)*(s-c)*(s-d);
        printf("%.02lf\n",sqrt(k));
    }
    return 0;
}

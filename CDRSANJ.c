#include<stdio.h>
#include<math.h>

int is_prime(num)
{
    int i;
    for(i=2;i*i<=num;i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
            return 1;
    }
}

int f(num)
{
    int i,j;
    if(num <= 2)
    {
        return num;
    }
    else
    {
        if(is_prime(num) == 0)
        {
            i = sqrt(num);
            while(i >= 1)
            {
                if(num%i == 0)
                {
                    j = num/i;
                    break;
                }
                i--;
            }
            return(f(i) + f(j));
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
}

#include<stdio.h>
#include<string.h>

char b[300];

int divide_intstr(int m)
{
    int i=0,temp,b_temp=0;
    while(b[i] != '\0')
    {
        temp = b[i]-'0';
        b_temp = (b_temp*10 + temp)%m;
    }
    return b_temp;
}

int gcd(int a)
{
    int b = divide_intstr(a);
    if(a==0 && b==0)
        return 0;
    else if(a==0)
        return b;
    else if(b==0)
        return a;
    else if(b%a==0)
        return a;
    else
        return gcd(a,b);
}

int main()
{
    long int a,t,i;
    char ch;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&a);
        ch = getchar(); i=0;
        while(ch != '\n')
        {
            b[i] = ch;
            ch = getchar();
            i++;
        }
        b[i-1] = '\0';
    }
    return 0;
}

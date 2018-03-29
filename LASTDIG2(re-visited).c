#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
char a[1002],b[102];
int i,len_a,len_b,r,p=0,res=1;
scanf("%s",&a); scanf("%s",&b);
len_a=strlen(a); len_b=strlen(b);
r = a[len_a-1]-'0';
if(len_a==1 && r==0)
{
    printf("0\n");
}
else if(len_b==1 && b[0]=='0')
{
    printf("1\n");
}
else if(r==0 || r==1 || r==5 || r==6)
{
    printf("%d\n",r);
}
else
{
    for(i=0;i<len_b;i++)
    {
        int d = b[i]-'0';
        p = (p*10 + d)%4;
    }
    if(p==0)
        p=4;
    while(p--)
    {
        res = (res*r)%10;
    }
    printf("%d\n",res);
    }
}
return 0;
}

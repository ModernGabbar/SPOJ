#include<stdio.h>
#include<string.h>

int main()
{
    char str[200],a[50][50];
    int c,r,i,j,index;
    scanf("%d",&c);
    while(c!=0)
    {
        index = 0;
        gets(str);
        r=strlen(str)/c;

        i = 1;
        while(i<=r)
        {
            j = 1;
            while(j<=c)
            {
                a[i][j]=str[index];
                j++; index++;
            }
            i++; j--;
            while(j>=1)
            {
                a[i][j]=str[index];
                j--; index++;
            }
            i++;
        }

        for(j=1;j<=c;j++)
        {
            for(i=1;i<=r;i++)
            {
                printf("%c",a[i][j]);
            }
        }
        printf("\n");
        scanf("%d",&c);
    }
    return 0;
}

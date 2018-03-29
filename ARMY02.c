#include<stdio.h>

int main()
{
    int i,j,k,t;

    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        long int ng,nm,g,m,temp_g=0,temp_m=0;
        scanf("%ld%ld",&ng,&nm);
        for(i=0;i<ng;i++)
        {
            scanf("%ld",&g);
            if(temp_g < g)
                temp_g = g;
        }
        for(j=0;j<nm;j++)
        {
            scanf("%ld",&m);
            if(temp_m < m)
                temp_m = m;
        }

        if(temp_g >= temp_m)
        {
            printf("Godzilla\n");
        }
        else
        {
            printf("MechaGodzilla\n");
        }
    }
    return 0;
}

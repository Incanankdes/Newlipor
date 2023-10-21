#include<stdio.h>

int main()
{
    int i = 2;
    int u = 2;
    int c;
    int d = 0;
    int e;
    scanf("%d",&e);
    while(i <= e)
    {
       for(u=2;u<i;u++)
       {
        c = (i % u);
        if(c == 0)
        d = d + 1;
        }
        if(d == 0)
        {
        printf("%d ",i);
        u = i;
        }
       d = 0;
       u = 2;
       i++;
    }
    return 0;
}
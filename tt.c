#include<stdio.h>

int main()
{
    int a,b/*,c*/;
    int i = 1;
    int c;
    /*c = */scanf("%d %d",&a, &b);
    
    /*if(c = -1)
    printf("因为程序错误，你即将被十个周男轮*");*/
    for(i = 1;i <= b;i++)
    {
        if(a % i == 0 && b % i ==0)
        c = i;
    }
    
    printf("%d",c);

    A:
    return 0;
}
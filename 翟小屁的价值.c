#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int b = 1;

void GUESS(int a)
{
    int c;
    printf("请输入价值");
    scanf("%d",&c);
    if(c < a)
    printf("不不不，这比周男还贱\n");
    else if(c > a)
    printf("不不不，翟小屁比这还贱\n");
    else
    {
    printf("哎呦，很了解翟小屁啊\n");
    b = 0;
    }
}

int main()
{

    srand((unsigned int) time(NULL));
    int a = rand();
    while(b == 1)
    {
    
    printf("下面是一颗翟小屁的脑袋");
    if(a > 0 && a <= 100)
    {
       printf("made of shit");
       GUESS(a);
    }
    else if(a < 2049)
    {
        printf("made of H2O");
        GUESS(a);
    }
    else if(a < 16385)
    {
        printf("made of dm");
        GUESS(a);
    }
    else
    {
        printf("made of fire");
        GUESS(a);
    }
    //printf("%d",a);
    }
    return 0;
}
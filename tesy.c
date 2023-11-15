#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int x)
{
    int b = 2;
    int c = 0;
    for(b = 2;b <= sqrt(x);b++)
    {
        if(x % b == 0)
        {
        c = 1;
        break;
        }
    }
    if(c == 1)
    return 0;
    else
    return 1;
}

int main()
{
    int a = 0;
    for(a = 100;a < 201;a++)
    {
        if(is_prime(a))
        printf("%d\t",a);
    }
   // system("pause");
    return 0;
}
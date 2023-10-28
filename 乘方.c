#include<stdio.h>

int MULTI(int a,int b)
{
   int c;
   c = a;
   for (b; b > 1; b--)
   {
     a = a * c;
   }
   return a;
   
}


int main()
{
    float i = 1.0;
    int u = 2;
    float d;
    float b = 0.0;
    while(i < 101.0)
    {
        d = i * MULTI(-1,u);
        b = b + 1/d ;
        // printf("%lf\n",1/d);
        i += 1;
        u ++;
        
    }
    printf("%lf",b);
    return 0;
}
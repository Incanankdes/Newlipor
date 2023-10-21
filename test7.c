#include<stdio.h>

int main()
{
   int a,b,c,d;
   d = 0;
   while(scanf("%d",&a) != -1)
   {
     if(d = 0)
     b = a;
     else
     {
     c = (a > b ? a : b);
     b = c;
     }
     d++;
   }
   
   printf("%d",c);
   return 0;
}
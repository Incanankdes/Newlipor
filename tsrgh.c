#include <stdio.h>
#include <string.h>

int main()
{
   int a, b, c;
    int d=0;
    int e=0;
    int f=0; 
    scanf("%d %d", &a, &b); 
    int arr[a][b];     
    while(scanf("%d",&c) != EOF)
    {
      arr[d][e]=c;
      e++;
      if(e == b)
      {
        d++;
        e=0;
      }  
    } 
    for(c=0;c<b;c++)
    {
        for(f=0;f<a;f++)
        {
            printf("%d ",arr[f][c]);
        }
        printf("\n");
    }   
    return 0;
}

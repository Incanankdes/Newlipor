#include <stdio.h>
//在涉及数组指针时，有时可以自动解引用，示例如下：
/*int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* p = arr;//p = &arr 也能走
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; i++)
    {
        printf("%d ",p[i]);//p[i] = arr+i
    }

    return 0;
}*/

//一个整数&其减去1，每次消除一个二进制‘1’；
//一个整数|其加上1，每次消除一个二进制‘0’。

int main()
{
    int a = 0;
    int i = 0;
    scanf("%d",&a);
    if(a > 0)
    {
    while(~a)
    {
        i++;
        a = a | (a+1);
    }
    }
    else
    {
    a = ~(a - 1);
    
    while(~a)
    {
        i++;
        a = a | (a+1);
    }
    }
    printf("%d",32-i);
    return 0;
}
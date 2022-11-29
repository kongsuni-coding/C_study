#include<stdio.h>
int main()
{
    int a=3, b=12, k;
    if(a>0)
    {
        b++;
        k=a+b;
    }
    else
    {
        b--;
        k=a+b;
    }
    printf("%d\n",k);
    return 0;
}

#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    if (A%2==0&&A!=0)
        printf("%s\n","even");
    else if (A%2!=0)
        printf("%s\n","odd");
    else if (A==0)
        printf("%s\n","zero");
    return 0;
}

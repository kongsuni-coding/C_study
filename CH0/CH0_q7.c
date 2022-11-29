#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);  
    if(N%12==0)
        printf("%d\n",N/12);
    else
        printf("%d\n",(N/12)+1);

    return 0;

}

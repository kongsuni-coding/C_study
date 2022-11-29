// 삼각형의 제일 큰 변이 나머지 두 변의 합보다 작아야 삼각형을 그릴 수 있음
#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    //A가 제일 큰 경우
    if(A>B && A>C)
        {
        if (A<B+C)
            printf("%s\n","YES");
        else   
            printf("%s\n","NO");
        }
    //B가 제일 큰 경우
    if(B>A && B>C)
        {
        if(B<A+C)
            printf("%s\n","YES");
        else
            printf("%s\n","NO");
        }
 
    //C가 제일 큰 경우
    if(C>A && C>B)
        {
        if(C<B+A)
            printf("%s\n","YES");
        else
            printf("%s\n","NO");
        }    
    return 0;


}

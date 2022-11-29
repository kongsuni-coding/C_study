#include<stdio.h>
int main()
{
    int eng;
    printf("input your english score ?");
    scanf("%d",&eng);
    if(eng>=90) printf("excellent\n");
    else if (eng>=80)   printf("good\n");
    else if (eng>=70)   printf("just so so\n");
    else printf("you need effort\n");
    return 0;  
}

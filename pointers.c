#include<stdio.h>
int main()
{
    int a,b;
    int sum,diff;
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=abs(a-b);
    printf("%d\n%d",sum,diff);
    return 0;
}

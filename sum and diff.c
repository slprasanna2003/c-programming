#include <stdio.h>
int main()
{
	int x,y,sum,diff;
    float a,b,add,differ;
    scanf("%d %d",&x,&y);
    sum=x+y;
    printf("%d ",sum);
    diff=x-y;
    printf("%d\n",diff);
    scanf("%f %f",&a,&b);
    add=a+b;
    printf("%.1f ",add);
    differ=a-b;
    printf("%.1f",differ);
    return 0;
}

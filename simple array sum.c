#include<stdio.h>
int main()
{
    int n,i=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
         sum+=a[i];
    }
     printf("%d",sum);
    return 0;
}

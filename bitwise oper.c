#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int maxAnd=0,maxOr=0,maxXor=0;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if (maxAnd<(i&j) && (i&j)<k)
            { 
                maxAnd=(i&j);
            }
            if (maxOr<(i|j) && (i|j)<k)
            {
                maxOr=(i|j);
            }
            if (maxXor<(i^j) && (i^j)<k)
            {
                maxXor=(i^j);
            }
        }
    }
    printf("%d\n%d\n%d",maxAnd,maxOr,maxXor);
    return 0;
}

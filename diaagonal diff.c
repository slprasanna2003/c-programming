#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100][100];
    int i,j,d1=0,d2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
            d1=d1+a[i][i];
            d2=d2+a[i][n-1-i];
    }
    int ans=abs(d1-d2);
    printf("%d",ans);
    return 0;
}

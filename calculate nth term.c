#include<stdio.h>
int s(int n,int a,int b,int c)
{
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else if(n==3){
        return c;
    }
    else{
     return s(n-1,a,b,c)+s(n-2,a,b,c)+s(n-3,a,b,c);
    }
    return s(n,a,b,c);
}
int main()
{
    int n,a,b,c;
    int ans;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    ans=s(n,a,b,c);
    printf("%d",ans);
    return 0;
}

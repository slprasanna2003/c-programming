#include<stdio.h>
int main()
{
    int a,b,i;
    char *representation[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
     if(i>9)
     {
         if(i%2!=0)
         printf("odd\n");
         else 
         printf("even\n");
     } 
     else {
     printf("%s\n",representation[i]);
     }  
    }
    return 0;
}

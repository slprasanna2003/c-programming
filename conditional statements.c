#include<stdio.h>
int main()
{
    int n;
  char *representation[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    if(n>=1&&n<=9)
     {
         printf("%s\n",representation[n-1]);
     }
     else
      {
     printf("Greater than 9");
     }
    return 0;
}

#include<stdio.h>
int main()
{
    char num[1001],i;
    scanf("%s",num);
    int j,count;
    for(i=48;i<=57;i++)               //ASCII values 0=48,----,9=57
    {
        count=0;
        for(j=0;j<strlen(num);j++)
        {
            if(num[j]==i)
            {
                count++;
            }
        }
         printf("%d ",count);
    }
    return 0;
}

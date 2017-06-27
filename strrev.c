# shanmugapriya
#include<stdio.h>
int main()
{
char ch[50],r[30];
int i,j,count=0;
    printf("\nEnter a string:");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
    count++;
    }
    printf("\n%d",count);
    for(j=(count-1);j>=0;j--)
    {
    printf(" %c",ch[j]);
    }
return 0;
}

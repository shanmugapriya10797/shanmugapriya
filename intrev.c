# shanmugapriya
#include<stdio.h>
int main()
{
    char a[]={"6258"};
int n,ch,i,j,count=0;
    
for(i=0;a[i]!='\0';i++)
{
 count++;
}printf("count=%d\n",count);
    for(j=count-1;j>=0;j--)
    {
        printf(" %c",a[j]);
    }
    return 0;
}

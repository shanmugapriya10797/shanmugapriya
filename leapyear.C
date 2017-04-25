# shanmugapriya 
#include<stdio.h>
    int main()
{
int a;
scanf("%d",&a);
if((a%4==0)&&(a%400==0))
    printf("\n%d is leap year",a);
        else 
            printf("\n%d is not a leap year",a);
        return 0;
    }

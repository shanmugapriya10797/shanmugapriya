# shanmugapriya
#include<stdio.h>
#include<math.h>
    int main()
    {
        int num,a,r=0,rem;
        scanf("%d",&num);
        a=num;
        while(num!=0)
        { 
            rem=num%10;
            r=r*10+rem;
            num=num/10;
        }
        if(a==r)
        {
        printf("\n %d is palindrome",r);
        }else
        {
            printf("%d is not a palindrome",r);
        }
    }

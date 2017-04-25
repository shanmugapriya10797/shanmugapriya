# shanmugapriya
#include<stdio.h>
#include<math.h>
    int main()
    {
        int a,i,count=0;
        scanf("%d",&a);
        for(i=2;i<a/2;i++)
        {
        if(a%i==0)
         printf("\n%d is not a prime",a);
         count++;
        }
        
            if(count==0)
            {
            printf("\n%d is a prime",a);
            }
        return 0;
    }
        

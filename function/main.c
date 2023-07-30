#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ans,num;
    for(num=1;num<=100;num++)
    {
        ans=sqrt(num);
        printf("square root of %.2f is : %.2f \n",num,ans);

    }
}

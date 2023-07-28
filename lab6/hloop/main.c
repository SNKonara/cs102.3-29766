#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,num,sum=0,avg;
    while(count<10)
    {
        printf("Enter a number:");
        scanf(" %d",&num);

        sum=sum+num;

         count++;
    }
    avg=sum/10;

    printf("avg is : %d",avg);
    printf("total is : %d",sum);

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price[10],sum=0,avg=0,max=0;
    int i;
    for (i=0; i<10; i++)
    {
        printf("Enter product price: ");
        scanf("%f",&price[i]);
    }
    for(i=0; i<10; i++)
    {
        sum=sum+price[i];
        if(price[i]>max)
            max=price[i];
    }
    avg=sum/10;
    printf("Average price is : %.2f \n",avg);
    printf("Total price is : %.2f \n" ,sum);
    printf("max price is : %.2f",max);

}

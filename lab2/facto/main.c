#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=1,count=1,num;
    printf("Enter number:");
    scanf(" %d",&num);
    while(count<=num)
        {fact=fact*count;
        count++;}

    printf("Factorial of %d is: %d",num,fact);

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,expo,power=1;
    printf("enter the base:");
    scanf(" %d",&base);
    printf("enter the exponent:");
    scanf(" %d",&expo);
    while(expo>0)
    {
        power=base*power;
        expo--;
    }
    printf("The power of given number: %d",power);
}

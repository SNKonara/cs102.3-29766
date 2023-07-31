#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,mod;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    mod=num1%num2;
    if(mod==0)
        printf(" %d is multiply of %d",num1,num2);
    else
        printf(" %d is not multiply of %d",num1,num2);

}

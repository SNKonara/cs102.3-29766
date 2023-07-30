#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num,mod;

 printf("Enter number:");
 scanf(" %d",&num);

 mod=num%2;

 switch(mod)
 {
 case 0:printf(" %d is Even number.",num);break;
 case 1:printf(" %d is Odd number.",num);break;
 default: printf("Unknown numerical value");
}
}

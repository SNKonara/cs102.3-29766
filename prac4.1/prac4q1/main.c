#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num,mod;

 printf("Enter number:");
 scanf(" %d",&num);

 mod=num%2;

 if(mod==0)
   printf(" %d is Even number",num);
 else
   printf(" %d is Odd number",num);
}

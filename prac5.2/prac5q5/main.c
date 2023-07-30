#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num,digit;

 printf("Enter number:");
 scanf(" %d",&num);

 do
 {
  digit=num%10;
  printf(" %d",digit);
  num=num/10;
 } while(num>0);
}

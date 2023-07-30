#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num,sum=0,digit;

 printf("Enter number:");
 scanf(" %d",&num);

 while(num>0)
 {
  digit=num%10;
  sum= sum+digit;
  num=num/10;
 }
 printf("Sum of all digits of is: %d",sum);


}

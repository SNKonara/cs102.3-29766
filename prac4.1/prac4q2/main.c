#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
 char calcu;
 printf("Enter two numbers:");
 scanf(" %d %d",&a,&b);
 printf("Enter desired operator:");
 scanf(" %c",&calcu);
 switch(calcu)
 {
 case '+': printf("Addition of %d and %d is: %d",a,b,a+b);break;
 case '-': printf("Subtraction of %d and %d is: %d",a,b,a-b);break;
 case '*': printf("Multipication of %d and %d is: %d",a,b,a*b);break;
 case '/': printf("Division of %d and %d is: %d",a,b,a/b);break;
 default:printf("Unknown operator.");

 }
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num1,num2,max;
 printf("Enter two numbers: \n");
 scanf("%d %d",&num1,&num2);
 max=num1;
 if(max>num2)
   printf(" %d is the highest number.",num1);
 else
   printf(" %d is the highest number.",num2);

}

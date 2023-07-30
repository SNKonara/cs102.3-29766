#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,num3,max,min;
printf("Enter three numbers:");
scanf(" %d %d %d",&num1,&num2,&num3);
if(num1>num2)
{
 if(num1>num3)
 max=num1;
 else
 max=num3;
}
 else if(num2>num3)
 max=num2;
 else
 max=num3;
 printf("The largest number is %d \n",max);
 min=num1;
 if(num2>min)
 {if(num3>min)
 min=num1;
 else
 min=num3;
 }
 else if(num2<num3)
 min=num2;
 else
 min=num3;
printf("The smallest number is %d",min);
}

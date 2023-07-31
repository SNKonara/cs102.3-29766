#include <stdio.h>
#include <stdlib.h>
int main()
{
int count,sum,num,avg;
count=1;
sum=0;
while(count<=10)
{
    printf("enter a number:");// "enter %d number",count , this display enter number as enter num1 num2 and so on
    scanf("%d",&num);
    count++;
    sum=sum+num;
}
  avg=sum/10;
  printf("average is %d",avg);
}

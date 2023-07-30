#include <stdio.h>
#include <stdlib.h>
void sum()
{
  int num1,num2,sum,def;
  printf("Enter two numbers:");
  scanf(" %d %d",&num1,&num2);
  sum=num1+num2;
  def=num1-num2;
  printf("Sum is: %d \n",sum);
  printf("Difference is: %d \n",def);
}
int main()
{
    sum();

}

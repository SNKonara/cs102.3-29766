#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, x;
  printf("Enter first number: ");
  scanf("%lf", &num1);
  printf("Enter second number: ");
  scanf("%lf", &num2);

  x=num1;
  num1=num2;
  num2=x;

  printf("\nAfter swapping, first number = %lf\n", num1);
  printf("After swapping, second number = %lf", num2);

}

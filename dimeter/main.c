#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 float radius;
 printf("Enter the radius:");
 scanf("%f",&radius);

 printf("Diameter is: %.2f \n",radius*2.0);
 printf("Circumference is: %.2f \n",radius*M_PI*2.0);
 printf("Area is: %.2f",radius*radius*2.0* M_PI);
}

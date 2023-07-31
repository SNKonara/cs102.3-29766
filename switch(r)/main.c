#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float radius;
int op;
printf("Enter the radius:");
scanf(" %f",&radius);
printf("\n 1. Circumference of the circle \n 2. Volume of sphere \n 3. Area of circle \n ");
printf("Enter desired operation:");
scanf(" %d",&op);

switch(op)
{
    case 1 : printf("circumference of the circle: %.2f",radius*2.0*M_PI); break;
    case 2 : printf("Volume of sphere: %.2f",(4/3) *radius*radius*radius*M_PI); break;
    case 3 : printf("Area of the circle: %.2f",radius*radius*M_PI); break;
    default: printf("unknown operator.");

}

}

#include <stdio.h>
#include <stdlib.h>
int product(int a, int b)
{
    int product;
    product=a*b;
    return  product;
}
int main()
{
   int x,y;
   printf("enter two numbers: ");
   scanf(" %d %d",&x,&y);
   printf("Product is : %d",product(x,y));
}

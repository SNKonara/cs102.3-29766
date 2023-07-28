#include <stdio.h>
#include <stdlib.h>
//3.with return type, no parameters
int findsum()
{
    int a,b,total;
    printf("Enter two values:");
    scanf(" %d %d",&a,&b);
    total=a+b;
    return total;
}
int main()
{
   // findsum();  if you write it like this it doesnt give return value.
    // a function with return type return a value
    printf("the sum is %d \n",findsum());

}

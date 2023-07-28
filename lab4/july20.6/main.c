#include <stdio.h>
#include <stdlib.h>
int findsum(int x, int y)
{
    int sum=x+y;
    return sum;

}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf(" %d %d",&a,&b);
    printf(" the sum is %d",findsum(a,b));



}

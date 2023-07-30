#include <stdio.h>
#include <stdlib.h>
void calculate(int a, int b)
{
    int sum,def;
    sum=a+b;
    def=a-b;
    printf("The sum is: %d",sum);
    printf("The difference is: %d",def);
}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf(" %d %d",&x,&y);
    calculate(x,y);

}

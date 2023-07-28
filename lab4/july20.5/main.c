#include <stdio.h>
#include <stdlib.h>
int findmax()
{
    int a,b,max;
    printf("Enter two numbers:");
    scanf(" %d %d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    return max;
}
int main()
{
    printf("The highest number is %d \n",findmax());

}

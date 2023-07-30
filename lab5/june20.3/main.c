#include <stdio.h>
#include <stdlib.h>
void max(int a,int b)
{
    if(a<b)
        printf("The highest number is %d",b);
    else
        printf("The high number is %d",a);
}
int main()
{

   int x,y;
   printf(" enter two numbers:");
   scanf(" %d %d",&x,&y);
   max(x,y);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int p=0,n=0,z=0,count,num;
 for(count=1 ;count<=10; count++)
 {
 printf("enter %d number:",count);
 scanf("%d",&num);
 if(num>0)
 p=p+1;
 else if (num=0)
 z=z+1;
 else
 n=n+1;
 }
 printf("positive numbers: %d \n",p);
 printf("negative numbers: %d \n",n);
 printf("Zeros: %d",z);
}

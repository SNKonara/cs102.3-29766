#include <stdio.h>
#include <stdlib.h>

int main()
{

int mark,count,tot=0,avg=0;

for(count=1; count<=10 ;count++ )
 {
   printf("Enter the %d mark:",count);
   scanf(" %d",&mark);
   tot=tot+mark;
}
avg=tot/10;

printf("Total: %d \n",tot);
printf("Average: %d \n",avg);

if(avg<50)
 printf("FAIL");
else
 printf("PASS");
}

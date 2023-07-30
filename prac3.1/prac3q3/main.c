#include <stdio.h>
#include <stdlib.h>

int main()
{
 float basal,inc;
 char empname[20];

 printf("Enter employee name:");
 scanf(" %s",&empname);
 printf("\n Enter basic salary:");
 scanf("%f",&basal);

if(basal<5000)
 inc=basal*0.05;
if(basal>=10000)
 inc=basal*0.15;
else
 inc=basal*0.10;

printf("Employee name: %s",empname);
printf("\n New salary: %.2f",basal+inc);

}

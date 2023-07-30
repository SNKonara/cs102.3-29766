#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arry[10];
  int i,sum=0,avg=0,max,min;

  for(i=0;i<10;i++)
  {
      printf("Enter number: ");
      scanf(" %d",&arry[i]);

      sum=sum+arry[i];
  }
  avg=sum/10;

  max=arry[0];
  for(i=0;i<10;i++)
  {
      if(arry[i]>max)
        max=arry[i];
  }

  min=arry[0];
  for(i=0;i<10;i++)
  {
      if(arry[i]<min)
        min=arry[i];
  }

  printf("Values in reverse order: \n");
  for(i=9;i>=0;i--)
  {
      printf(" %d",arry[i]);
  }



  printf(" \n summation:%d \n",sum);
  printf(" Average value:%d \n",avg);
  printf(" Maximum value:%d \n",max);
  printf(" Minimum value:%d \n",min);

}

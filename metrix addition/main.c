#include <stdio.h>
#include <stdlib.h>

int main()
{
   int frist[3][3],second[3][3],sum[3][3];
   int x,y,a,b,u,w;
   for(x=0;x<3;x++)
   {
       for(y=0;y<3;y++)
       {
           printf("enter value for first matrix [%d][%d]:",x,y);
           scanf(" %d",&frist[x][y]);
       }
   }
   printf(" \n\n\n");

   for(a=0;a<3;a++)
   {
       for(b=0;b<3;b++)
       {
           printf("enter value for second matrix [%d][%d]:",a,b);
           scanf(" %d",&second[a][b]);
       }
   }

    for(u=0;u<3;u++)
   {
       for(w=0;w<3;w++)
       {
           sum[u][w]=frist[u][w]+ second[u][w];
       }
   }
       printf(" \n\n summation = \n");



   for(u=0;u<3;u++)
   {
       for(w=0;w<3;w++)
       {
           printf(" %d",sum[u][w]);
       }

       printf(" \n");
   }


}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,a,b,vecsum[x];

    printf("Enter number of rows and columns respectively: ");
    scanf(" %d %d",&x,&y);

    int arr[x][y];

    for(a=0;a <x; a++)
    {
        for(b=0;b <y; b++)
           {
            printf("Enter value for arr[%d][%d]: ",a,b);
            scanf(" %d",&arr[a][b]);
           }
    }


    for(a=0;a<x;a++)
    { vecsum[a]=0;
        for(b=0;b<y;b++)
        {
            printf(" %d",arr[a][b]);
            vecsum[a]=vecsum[a]+arr[a][b];
        }
        printf(" \n");
    }
    printf("Vector sum row wise:\n");
    for(a=0;a<x;a++)
    {
        printf(" %d \n",vecsum[a]);
    }
}

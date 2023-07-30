#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,a,b,scsum=0;

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
    {
        for(b=0;b<y;b++)
        {
            printf(" %d",arr[a][b]);
            scsum=scsum+arr[a][b];
        }
        printf(" \n");
    }



    printf("Scalar sum of above array: %d",scsum);

}

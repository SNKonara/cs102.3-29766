#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,marks,sum,avg;
    while(count<10)
    {
        printf("Enter marks: ");
        scanf("%d", &marks);

        sum=sum+marks;

        count++;
    }
    avg=sum/10;
       if(avg>50)
        printf("Faill");
       else
        printf("Pass");


}

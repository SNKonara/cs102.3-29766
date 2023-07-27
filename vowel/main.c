#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter month number:");
    scanf(" %d",&month);

    if(0<month && month<13)
       switch(month)
      {
          case 4: case 6: case 9: case 11: printf("30 days"); break;
          case 2 : printf("28 days."); break;
          default: printf("31 days.");

      }
    else
        printf("Invalid number.");
}

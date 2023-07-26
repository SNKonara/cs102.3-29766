#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age, byear;
char sname[25];

printf("Enter student name\n");
scanf("%s", sname);
printf("Enter birth year:\n");
scanf("%d", &byear);
age = 2023 - byear;

printf("Name: %s", sname);
printf("\nAge: %d", age);

}

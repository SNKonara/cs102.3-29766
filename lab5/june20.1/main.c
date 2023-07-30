#include <stdio.h>
#include <stdlib.h>
void name()
{
    char name[10];
    printf("Enter name:");
    scanf(" %s",&name);
    printf(" %s \n",name);

}
void age()
{
    int byer, age;
    printf(" Enter birth year:");
    scanf(" \n %d",&byer);
    age=2023-byer;
    printf(" Age: %d",age);
}
int main()
{
    name();
    age();
}

#include <stdio.h>
#include <stdlib.h>
void display()
{
    printf("Hello world!");
    display(); // recrusive function
}
int main()
{
   display();
}

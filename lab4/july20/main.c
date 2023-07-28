#include <stdio.h>
#include <stdlib.h>
// 1.no return type no parameters
void display() // called function
{
    int x;
    for(x=1;x<=5;x++)
        printf(" %d",x);
}
int main()
{
    //call the function
    display();

}

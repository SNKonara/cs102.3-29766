#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n1;
    float n2;
    double n3;
    char name[10];
    printf("Enter integer number");
    scanf("%d",&n1);
    printf("Enter float number");
    scanf("%f",&n2);
    printf("Enter double number");
    scanf("%f",&n3);
    printf("Enter character");
    scanf("%s",&name);
    printf("Intiger value is %.d\n",n1);
    printf("Float value is %f\n",n2);
    printf("Double value is %lf\n",n3);
    printf("Char value is %s\n",name);


}

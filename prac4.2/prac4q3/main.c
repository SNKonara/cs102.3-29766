#include <stdio.h>
#include <stdlib.h>

int main()
{
 char lett;
 printf("Enter letter:");
 scanf(" %c",&lett);

 switch(lett)
 {
 case 'a': case 'e':case 'i':case 'o':case 'u': printf(" %c is a vowel.",lett);break;
 case 'A': case 'E':case 'I':case 'O':case 'U': printf(" %c is a vowel.",lett);break;
 default: printf(" %c is not a vowel.",lett);
 }


}

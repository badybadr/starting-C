#include <stdio.h>
#include <stdlib.h>

int main()
{

    char alphabet  ;
    printf("veuillez entrer une alphabet :");
    scanf("%c",&alphabet) ;
    switch (alphabet){
    case 'A' :
    printf("A est un voyelle") ;
    break;
    case 'E' :
    printf(" E est un voyelle") ;
    break;
     case 'U' :
    printf("U est un voyelle") ;
    break;
     case 'I' :
    printf("I est un voyelle") ;
    break;
     case 'O' :
    printf("O est un voyelle") ;
     case 'Y' :
    printf("y est un voyelle") ;
    break;
    default :
    printf("L'alphabet que vous saisiez est consonnes ");
    }
    return 0;
}

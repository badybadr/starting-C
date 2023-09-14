#include <stdio.h>
#include <stdlib.h>

int main()
{

    float A , B , S ;
    char operator ;
    operator = '+' , '-' , '*' , '/' ;
    printf("entre la valeur de le nombre A :") ;
    scanf("%f",&A) ;
    printf(" entre l'operator :") ;
    scanf(" %c",&operator ) ;
    printf("entre la valeur de le nombre B :") ;
    scanf("%f",&B) ;
    switch(operator){
    case '+' :
        printf("le resultat est  %.2f ",A+B);

    break;
     case '-' :printf("le resultat est %.2f ",A-B);
    break;
     case '*' :printf(" le resultat est  %.2f ",A*B);
    break;
     case '/' :
     if(B != 0 )
        printf("le resultat est %.2f ",A/B);
      else
         printf("operation imposible");
    break;
     default :
        printf("l'operation demander  est inactif ") ;
    }

    return 0;
}

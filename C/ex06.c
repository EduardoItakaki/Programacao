#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])



{

    int a,b,Reais;
    
    printf("digite o valor do cambio do dolar: ");
    scanf("%i",&a);

    printf("digite o valor em dolar: ");
    scanf("%i",&b);

    Reais=a*b;
    printf("o valor do cambio %i Reais para o valor em dolar %i e igual a %i Reais",a,b,Reais);



    return 0;
}
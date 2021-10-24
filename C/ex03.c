#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
    int a,b,area;
    
    printf("digite o valor da base do triangulo: ");
    scanf("%i",&a);
    printf("digite o valor da altura do triangulo: ");
    scanf("%i",&b);
    area=a*b/2;
    printf("a area do triangulo %i e %i e igual a %i",a,b,area);

    return 0;
}


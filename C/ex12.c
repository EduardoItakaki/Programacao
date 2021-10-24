#include<stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])

{


    int a,b,area;
    
    printf("digite o valor da base do retangulo: ");
    scanf("%i",&a);
    printf("digite o valor da altura do retangulo: ");
    scanf("%i",&b);
    area=a*b;
    printf("\narea do retangulo  e igual a:%i",area);

    if(area>100){
    printf("\nTerreno Grande!");
    }
    return 0;
    
}

#include<stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])

{


    float peso,altura,imc;
    
    printf("digite o seu peso: ");
    scanf("%f",&peso);

    printf("digite a sua altura: ");
    scanf("%f",&altura);

    imc=peso/(altura*altura);


    if(imc<20){
    printf("Abaixo do peso!");
    }

    else if(imc<25){
    printf("Peso ideal");
    }

    else{
    printf("Acima do peso!");

    }

    return 0;
    
}

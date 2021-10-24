
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])

{

float peso,altura,imc;
char sexo;
    
    
    printf("\n digite o  sexo M ou F: ");
    scanf("%c",&sexo);


    printf("\n digite o seu peso: ");
    scanf("%f",&peso);

    printf("\n digite a sua altura: ");
    scanf("%f",&altura);

    imc=peso/(altura*altura);

    if (sexo=='M'){

    if(imc>=25){
    printf ("seu imc e:%.1f ",imc);   
    printf("\n acima do peso!");
    }

    else{
    
    if(imc>=20){
    printf ("seu imc e:%.1f ",imc);   
    printf("\n peso ideal!");
    }

    else{  
    printf("seu imc e:%.1f ",imc); 
    printf("\n abaixo do peso!");
    }
    }
    }

    else {
    if(imc>=24){
    printf ("seu imc e:%.1f ",imc);   
    printf("\n acima do peso!");
    }

    
else {
    if(imc>=19){
    printf ("seu imc e:%.1f ",imc);   
    printf("\n peso ideal!");
    }

else{
    printf("seu imc e:%.1f ",imc); 
    printf("\n abaixo do peso!");
    }
    }
    }

    return 0;

    }

    


















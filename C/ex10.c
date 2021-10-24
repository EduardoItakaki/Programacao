#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){


    int a,b;
    
    printf("digite o valor de um primeiro numero: ");
    scanf("%i",&a);
    
    printf("digite o valor de um segundo numero: ");
    scanf("%i",&b);

    if(a<b){
        printf("o menor e:%i",a);
    }

    else{ 
        printf("o menor e:%i",b);
    }



    return 0;

}
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){


    int a,b;
    
    printf("digite o valor de um primeiro numero: ");
    scanf("%i",&a);
    
    printf("digite o valor de um segundo numero: ");
    scanf("%i",&b);

    if(a>b){
        printf("o maior e:%i",a);
    }

    else if(a<b){
        printf("o maior e:%i",b);
    }
    
    
   else{
       printf("os numeros sao identicos");
   }
    

    return 0;

}
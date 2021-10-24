
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])

{


    char sexo;
    
    printf("digite o seu sexo: ");
    scanf("%s",&sexo);


    while((sexo!='F')&&(sexo!='M')) {

    printf("Erro! Digite  somente M ou F! Digite novamente: ");
    scanf("%s", &sexo);

    }
return 0;

}




    
    


#include<stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])

{

    int a,b,c;
    
    printf("digite o primeiro numero: ");
    scanf("%i",&a);

    printf("digite o segundo numero: ");
    scanf("%i",&b);

    printf("digite o terceiro numero: ");
    scanf("%i",&c);


    if (a>b){
        if(a>c){
          printf("o maior numero e:%i",a);
    }
    
    else{
          printf("o maior numero e:%i",c);

    }
    }

    else  {
        if(b>c){
           printf("o maior numero e:%i",b);
        }
        else{
            printf("o maior numero e:%i",c);
        }
}
    
    return 0;
    
}


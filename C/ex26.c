
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])

{

int numero, i, r;

printf("Digite um numero para a tabuada: ");
scanf("%i", & numero);

while(numero<0){
printf("Erro! Apenas numeros positivos. Digite novamente: ");
scanf("%i", &numero);
}


i=1;


while (i <= 10){
r=numero * i;
printf("%i x %i = %i \n", numero, i, r);
i=i+1;

}

return 0;

}
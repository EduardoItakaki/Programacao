
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])

{

int a,impares,N;
a=1;
impares=1;


printf("Digite a quantidade de numeros que serao somados em seguencia:  \n");

scanf("%i ",&N);

while(N<=0 && N<100){
    printf("Erro! Somente numeros positivos e menores que 100, digite novamente: ");
    scanf("%i ", &N);
}

for(int i=0; i<N; i++){
a=impares+a;
printf("%i \n ",a);
impares =impares +2;

}

return 0;

}



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

int numeros[20];
int constante;
constante=5;

printf("Digite os 20 numeros: ");

for (int i=0;i<20;i++){
    scanf("%i", &numeros[i]);

}

printf("O numeros digitados multiplicados por 5 sao: %i\n" );

for (int i=0; i<20;i++){
    if(numeros[i] = constante * numeros[i]);
    printf("%i\n",numeros[i]);

}


return 0;
}


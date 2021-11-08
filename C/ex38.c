
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
int numeros [2][3];


printf("Digite os valores para a matriz \n");

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
    scanf("%i", &numeros[i][j]);

}
}

printf("O numeros digitados na matriz sao: \n");

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){;
    printf("%i",numeros[i][j]);

}

printf("\n");

}
return 0;
}

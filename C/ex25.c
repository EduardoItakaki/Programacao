
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])

{

int numero, r;

printf("digite o  numero 5  para fazermos a sua tabuada: ");
scanf("%i",&numero);


for (int i=0; i<=10; i++){

    r=numero*i;

    printf(" %i x %i = %i \n", numero, i, r);


}

return 0;

}



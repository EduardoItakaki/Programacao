

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int fibonacci,a,b;

printf("Digite 30 numeros \n");
fibonacci = 1;
a=0;
b=1;

while(fibonacci <832040){
    fibonacci = a + b;
    b=a;
    a=fibonacci;
    printf("\n %i\n" , fibonacci);
}

return 0;
}

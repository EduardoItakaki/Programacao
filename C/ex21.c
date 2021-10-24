#include <stdio.h>

int main(int argc, char const *argv[])
{

    float P1,P2;

    printf( "Digite a nota da P1: ");
    scanf("%f", &P1);

    P2=((15-P1)/2);
    printf( " Para ser aprovado voce precisa desta nota na P2: %f",P2);
    

return 0;


}
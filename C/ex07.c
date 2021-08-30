int main(int argc, char const *argv[])



{

    int a,b,c,d,e,total,pagamento,troco ;
    
    printf("digite o valor do produto: ");
    scanf("%i",&a);

    printf("digite o valor do produto: ");
    scanf("%i",&b);

    printf("digite o valor do produto: ");
    scanf("%i",&c);

    printf("digite o valor do produto: ");
    scanf("%i",&d);

    printf("digite o valor do produto: ");
    scanf("%i",&e);


    total=(a+b+c+d+e);
    printf("o valor dos produtos %i,%i,%i,%i e %i e o total de %i ",a,b,c,d,e,total);

    
    printf("digite o valor do pagamento: ");
    scanf("%i",&pagamento);

    troco=(pagamento-total),
    printf("o valor do troco e %i",troco);



    return 0;
}
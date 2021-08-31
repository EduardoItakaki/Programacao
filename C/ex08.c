int main(int argc, char const *argv[])



{

    float a,b,imc;
    
    printf("digite o seu peso: ");
    scanf("%f",&a);

    printf("digite a sua altura: ");
    scanf("%f",&b);

    imc=a/(b*b);
    printf("o valor do imc para o peso %.2f e a altura %.2f e igual a %.2f imc ",a,b,imc);




    return 0;
}

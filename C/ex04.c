
int main(int argc, char const *argv[])

{
    int a,b,c,d,soma,media;
    
    printf("digite o primeiro valor : ");
    scanf("%i",&a);
    printf("digite o segundo valor: ");
    scanf("%i",&b);
    printf("digite o terceiro valor: ");
    scanf("%i",&c);
    printf("digite o quarto valor: ");
    scanf("%i",&d);

    media=(a+b+c+d)/4;
    printf("a media dos valores  %i,%i,%i e %i e igual a %i",a,b,c,d,media);

    return 0;
}
int main(int argc, char const *argv[])

{
  int a,Fahrenheit;
    
    printf("digite um valor de temperatura em graus Celsius: ");
    scanf("%i",&a);
    
    Fahrenheit=(a*1.8)+32;
    printf("a temperatura %i graus Celsius e igual a %i graus Farenheit",a,Fahrenheit);



    return 0;
}
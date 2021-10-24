
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])

{
int catetooposto, catetoadjacente, hipotenusa,cat,hipot;

printf("Digite a medida do catetooposto:  ");
scanf("%i", &catetooposto);

printf("Digite a medida do catetoadjacente:  ");
scanf("%i", &catetoadjacente);

printf("Digite a medida a hipotenusa:  ");
scanf("%i", &hipotenusa);

cat=((catetooposto*catetooposto)+(catetoadjacente*catetoadjacente));
hipot=(hipotenusa*hipotenusa);

if(cat==hipot){
printf("Triangulo Retangulo!");
}

else{
        printf("Nao e Triangulo Retangulo!");
    }
    
 
 return 0;

}


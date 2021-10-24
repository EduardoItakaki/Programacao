
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{

float a,V0,t, V;

printf("\n Digite a velocidade inicial: ");
scanf("%f",&V0);

printf("\n Digite a aceleracao: ");
scanf("%f",&a);

printf("\n Digite o tempo de percurso: ");
scanf("%f",&t);

V=V0+(a*t);

if (V>120){
    printf("\nVEICULO MUITO RAPIDO");
}

else{
     if((V<=120) && (V> 80)){
     printf("\nVEICULO RAPIDO");    
     }

    else if ((V>60) && (V<= 80)){
    printf("\nVELOCIDADE DE CRUZEIRO"); 
    }

else{
     if((V<=60) && (V>40)){
     printf("\nVELOCIDADE PERMITIDA");    
     }

     else{
     printf("\n VEICULO MUITO LENTO");    

     }
   }

}

return 0;


}


#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int qi;

    printf("Digite o seu QI:\n");
    scanf("%d", &qi);

if(qi >= 0 && qi<= 150){

    if(qi <= 30){
        printf("Você é considerado: Ameba");
    }

    if(qi > 30 && qi <= 50){
       printf("Você é considerado: Débil Mental");
    }
    if(qi > 50 && qi <= 70){
        printf("Você é considerado: Regular");
    }
    if(qi > 70 && qi <= 100){
        printf("Você é considerado: Normal");
    }
    if(qi > 100 && qi <=150 ){
        printf("Você é considerado: Gênio");
    }

   }

    else {
        printf("QI inválido");
        }








    printf("\n\n\n");
    return 0;
}

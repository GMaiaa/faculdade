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
        printf("Voc� � considerado: Ameba");
    }

    if(qi > 30 && qi <= 50){
       printf("Voc� � considerado: D�bil Mental");
    }
    if(qi > 50 && qi <= 70){
        printf("Voc� � considerado: Regular");
    }
    if(qi > 70 && qi <= 100){
        printf("Voc� � considerado: Normal");
    }
    if(qi > 100 && qi <=150 ){
        printf("Voc� � considerado: G�nio");
    }

   }

    else {
        printf("QI inv�lido");
        }








    printf("\n\n\n");
    return 0;
}

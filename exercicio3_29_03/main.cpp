#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int l1, l2, l3;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &l1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &l2);

    printf("Digite o terceiro valor: \n");
    scanf("%d", &l3);

    if((l1<(l2 +l3 ))&&(l2<(l1+l3))&&(l3<(l1+l2))){
      if((l1 == l2) && (l2 == l3)){
        printf("Tri�ngulo equil�tero");
      } else if ((l1 == l2) || (l2 == l3)){
        printf("Tri�ngulo is�sceles");
      } else if ((l1 != l2) && (l2 != l3)){
        printf("Tri�ngulo escaleno");
      }
      } else {
        printf("Valores inv�lidos para um tri�ngulo");
      }



    printf("\n\n\n");
    return 0;
}

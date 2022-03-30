#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int idadeDias, anos, meses, dias;

    printf("A quantos dias você está vivo");
    scanf("%d", idadeDias);

    anos = idadeDias / 365;
    meses = (idadesDias % 365) / 30;
    dias = (idadesDias % 365) % 30;

    printf("Você está vivo a: %d anos\n %d meses \n %d dias", anos, meses, dias);









    printf("\n\n\n");
    return 0;
}

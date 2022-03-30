#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;

    printf("Infome a sua primeira nota:");
    scanf("%f", &n1);
    printf("Informe a sua segunda nota:");
    scanf("%f", &n2);
    printf("Informe a sua terceira nota:");
    scanf("%f", &n3);
    printf("Informe a sua quarta nota:");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("A sua média é: %0.2f", media );





    printf("\n\n\n");
    return 0;
}

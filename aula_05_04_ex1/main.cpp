#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float salarioInicial, salarioFinal;

    printf("Digite o seu salário atual:\n");
    scanf("%f", &salarioInicial);

    if(salarioInicial <= 500){
        salarioFinal = salarioInicial * 1.15;
        printf("O novo salario é de R$%0.2f", salarioFinal);

         if(salarioInicial > 500 && salarioInicial <= 1000){
            salarioFinal = salarioInicial * 1.1;
            printf("O novo salario é de R$%0.2f", salarioFinal);
            }
        } else {
          salarioFinal = salarioInicial * 1.05;
           printf("O novo salario é de R$%0.2f", salarioFinal);
        }








    printf("\n\n\n");
    return 0;
}

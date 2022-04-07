#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float salarioAtual, novoSalario;

    printf("Digite o seu salário: \n");
    scanf("%f", &salarioAtual);

    if(salarioAtual >= 0 && salarioAtual <= 2500){
        if(salarioAtual <= 400){
            novoSalario = salarioAtual * 1.15;
            printf("Seu novo salário é: R$%0.2f", novoSalario);
        }
         if(salarioAtual > 400 && salarioAtual <= 700){
            novoSalario = salarioAtual * 1.12;
            printf("Seu novo salário é: R$%0.2f", novoSalario);
        }
         if(salarioAtual > 700 && salarioAtual <= 1000){
            novoSalario = salarioAtual * 1.10;
            printf("Seu novo salário é: R$%0.2f", novoSalario);
        }
         if(salarioAtual > 1000 && salarioAtual <= 1800){
            novoSalario = salarioAtual * 1.07;
            printf("Seu novo salário é: R$%0.2f", novoSalario);
        }
         if(salarioAtual > 1800 && salarioAtual <= 2500){
            novoSalario = salarioAtual * 0.04;
            printf("Seu novo salário é: R$%0.2f", novoSalario);
        }

    } else {
        printf("Seu salário se mantém o mesmo");

    }











    printf("\n\n\n");
    return 0;
}

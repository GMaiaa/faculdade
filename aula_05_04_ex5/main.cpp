#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float filhos, salarioBruto, salarioFamilia, horas, salarioHora;

    printf("Digite o seu salario hora: \n");
    scanf("%f", &salarioHora);

    printf("Digite quantas horas voc� trabalhou: \n");
    scanf("%f", &horas);

    salarioBruto = horas * salarioHora;

    printf("Quantos filhos menores de 14 anos voc� possui: \n");
    scanf("%f", &filhos);
    if(salarioBruto <=1000){
    if(salarioBruto <= 500){
        salarioFamilia = filhos * 10.50;

    }
    if(salarioBruto > 500 && salarioBruto <= 1000){
        salarioFamilia = filhos * 6.50;
    }
    }else{
        salarioFamilia = filhos * 1.50;
    }
    printf("O seu sal�rio bruto � R$%0.2f e seu sal�rio fam�lia � R$%0.2f", salarioBruto, salarioFamilia);











    printf("\n\n\n");
    return 0;
}

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float n, pagamento, surplusHours;
    char c[7];

    printf("Digite o c�digo do oper�rio: \n");
    gets(c);

    printf("Digite o total de horas de trabalho: \n");
    scanf("%f", &n);




    if (n > 50){
        surplusHours = n - 50;
        pagamento = (n - surplusHours) * 10 + (surplusHours * 20);
        printf("O pagamento para esse funcion�rio �: %f", pagamento );
    } else{
        pagamento = n * 10;
        printf("O pagamento para esse funcion�rio �: %f", pagamento );
    }










    printf("\n\n\n");
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0;

    printf("\n Informe um numero para somar ou 0 para parar:");
    scanf("%d", &num);

    while(num!=0){
        soma = soma + num;
        printf("\n Informe um numero para somar ou 0 para parar:");
        scanf("%d", &num);
    }

    if(soma == 0){
        printf("\n Voc� n�o informou nenhum n�mero");
    } else{
        printf("\n A soma dos numeros informados � %d", soma);

    }



    printf("\n\n\n");
    return 0;
}

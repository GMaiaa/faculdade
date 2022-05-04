#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, spar = 0, simpar = 0, cont;

    for(cont=1;cont<=6;cont++){
        printf("\n Informe o %d° numero ==>", cont);
        scanf("%d", &num);
        if(num%2 == 0){
            spar= spar+num;
        }else{
            simpar=simpar+num;
        }
    }

    printf("\n A soma dos pares é %d e a Soma dos impares é %d", spar, simpar);




    printf("\n\n\n");
    return 0;
}

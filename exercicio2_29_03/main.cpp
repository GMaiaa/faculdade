#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, n4, q1, q2, q3, q4;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &n1);

    printf("Digite o segundo numero: \n");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: \n");
    scanf("%f", &n3);

    printf("Digite o quarto numero: \n");
    scanf("%f", &n4);

    q1 = pow(n1, 2);
    q2 = pow(n2, 2);
    q3 = pow(n3, 2);
    q4 = pow(n4, 2);

    if(q3 < 1000){
        printf("%f = %f \n %f = %f \n %f = %f \n %f = %f ", n1, q1, n2, q2, n3, q3, n4, q4);
    } else{
        printf("%f = %f", n3,q3);
    }





    printf("\n\n\n");
    return 0;
}

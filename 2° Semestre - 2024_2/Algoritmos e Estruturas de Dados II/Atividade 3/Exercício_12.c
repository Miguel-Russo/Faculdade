//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da fun��o
float calcularMedia(double num1, double num2, double num3);

int main(){

    int N1, N2, N3;
    float Res;

    printf("Informe o primeiro n�mero: ");
    scanf("%i", &N1);

    printf("Informe o segundo n�mero: ");
    scanf("%i", &N2);

    printf("Informe o terceiro n�mero: ");
    scanf("%i", &N3);

    Res = calcularMedia(N1, N2, N3);

    printf("\nMedia dos tres n�meros: %.2f\n", Res);

    return 0;
}

//Fun��o respons�vel retornar a m�dia dos n�meros
float calcularMedia(double num1, double num2, double num3){

    return(num1 + num2 + num3)/3;
}

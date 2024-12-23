//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da fun��o
int somaVetor(int A, int B, int C);

int main(){
	setlocale(LC_ALL, "Portuguese");
   
    int X, Y, Z, Res;
   
    printf("Informe o 1� n�mero: ");
    scanf("%i", &X);
   
    printf("Informe o 2� n�mero: ");
    scanf("%i", &Y);
   
    printf("Informe o 3� n�mero: ");
    scanf("%i", &Z);
   
    Res = somaVetor(X, Y, Z);
   
    printf("Soma do vetor = %i\n", Res);
    
    return 0;
}

//Fun��o respons�vel por somar todos os elementos de um vetor
int somaVetor(int A, int B, int C){
    int Vet[3] = {A, B, C};
    int i, Soma = 0;
   
    for(i = 0; i < 3; i++){
        Soma += Vet[i];
    }
   
    return Soma;
}

//Fun��o respons�vel por realizar a soma entre dois n�meros inteiros.
int Soma(int A, int B){
   
    return A + B;
}

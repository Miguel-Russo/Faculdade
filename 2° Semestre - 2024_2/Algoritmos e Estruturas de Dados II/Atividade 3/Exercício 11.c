//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da fun��o
int menorNumero(int num1, int num2, int num3);

int main(){
	int N1, N2, N3, Menor;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &N1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%i", &N2);
	
	printf("Informe o terceiro n�mero: ");
	scanf("%i", &N3);
	
	Menor = menorNumero(N1, N2, N3);
	
	printf("Menor n�mero: %i\n", Menor);

	return 0;
	
}

//Fun��o respons�vel por retornar o menor n�mero entre os 3
int menorNumero(int num1, int num2, int num3){
	
	if(num1 < num2 && num1 < num3){
		return num1;
	}
	else if(num2 < num1 && num2 < num3){
		return num2;
	}
	else{
		return num3;
	}
	
}

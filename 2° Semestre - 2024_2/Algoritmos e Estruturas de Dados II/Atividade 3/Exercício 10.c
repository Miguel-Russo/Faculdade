//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da fun��o
void maiorNumero(int num1, int num2);

int main(){
	int N1, N2;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &N1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%i", &N2);
	
	maiorNumero(N1, N2);
	
	return 0;
}

//Fun��o respons�vel por exibir se os n�meros s�o iguais ou se um � maior que o outro
void maiorNumero(int num1, int num2){
	
	if(num1 == num2){
		printf("\nOs n�meros s�o iguais.\n");
	}
	else if(num1 > num2){
		printf("\nO primeiro n�mero � o maior: %i\n", num1);
	}
	else{
		printf("\nO segundo n�mero � o maior: %i\n", num2);
	}
	
}

//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da fun��o
void exibirPares(int numero);

int main(){
	int N;
	
	printf("Informe um n�mero: ");
	scanf("%i", &N);
	
	exibirPares(N);
	
	return 0;
}

//Fun��o respons�vel por exibir todos os n�meros pares maiores que 0 e menores ou iguais a n
void exibirPares(int numero){
	
	int i;
	
	for(i = 1; i <= numero; i++){
		if(i % 2 == 0){
			printf("%i\n", i);
		}
	}
	
}

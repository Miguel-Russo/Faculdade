//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da fun��o
void mult(int v[], int tamanho);

int main(){
	int tam, i;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%i", &tam);
	printf("\n");
	
	int vet[tam];
	
	for(i = 0; i < tam; i++){
	    printf("Informe o %i� valor: ", i+1);
		scanf("%i", &vet[i]);
	}
	
	mult(vet, tam);
	
	return 0;
}

//Fun��o respons�vel por exibir a multiplica��o de todos os elementos do vetor
void mult(int v[], int tamanho){
	int i, res = 1;
	
	for(i = 0; i < tamanho; i++){
		res = res * v[i];
	}
	
	printf("\nMultiplica��o total = %i\n", res);
	
}

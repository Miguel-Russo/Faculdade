# 🖥️ Atividade 3 - Problemas Resolvidos  

Bem-vindo(a)! Este repositório contém soluções para diversos problemas da Atividade 3, organizados por número e descrição.  

Cada problema inclui um link direto para o código correspondente. 

---

## 📄 Lista de Problemas - Atividade 3

### Exercício 1  
**Descrição:**  

- Analise o código de programa abaixo, execute em seu computador e comente cada linha, explicando o
código. Além disso, refaça o código, criando uma função que permite ao usuário digitar todos os dados
do vetor pessoas[].

```
#include <stdio.h>

typedef struct{
	double peso;
	int idade;
	double altura;
} pessoa;

void imprimePessoa(pessoa p){
	printf("Peso: %.1lf\nIdade: %i\nAltura: %.2lf\n\n\n", p.peso, p.idade, p.altura);
}

void atribuirValor(pessoa p[]){
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Informe o peso da %i° pessoa: ", i+1);
		scanf("%lf", &p[i].peso);
		printf("Informe a idade da %i° pessoa: ", i+1);
		scanf("%i", &p[i].idade);
		printf("Informe a altura da %i° pessoa: ", i+1);
		scanf("%lf", &p[i].altura);
		printf("\n\n");
	}
	
}


int main(){
	pessoa pessoas[5], p1;
	
	atribuirValor(pessoas);
	
	p1 = pessoas[0];
	
	if(p1.idade > 20){
		p1.idade++;
	}
	
	imprimePessoa(p1);
	imprimePessoa(pessoas[0]);
	imprimePessoa(pessoas[1]); 
	imprimePessoa(pessoas[2]); 
	imprimePessoa(pessoas[3]); 
	imprimePessoa(pessoas[4]); 
	
	return 0;
}
```

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%201.c)

---

### Exercício 2  
**Descrição:**  

- Analise o código de programa abaixo, execute em seu computador e comente cada linha, explicando o  código.  

```
#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
	char modelo[50]; 
	int ano; 
	double preco; 
} Carro; 

void modificarPreco(Carro *c, double novoPreco){ 
	(*c).preco = novoPreco; 
} 

void imprimirCarro(Carro *c){ 
	printf("Modelo do carro: %s\n", c -> modelo); 
	printf("Ano do carro: %i\n", c -> ano); 
	printf("Preço do carro: %.2lf\n", c -> preco); 
	printf("\n\n\n");
}

int main(){ //Inicio da main
	setlocale(LC_ALL, "portuguese");
	Carro carro1; 
	
	strcpy(carro1.modelo, "XyZ"); 
	carro1.ano = 2020;
	carro1.preco = 90000.00;
	
	printf("Dados antes da modificação: \n");
	imprimirCarro(&carro1); 
	
	modificarPreco(&carro1, 115000.00); 
	
	printf("Dados após a modificação: \n");
	imprimirCarro(&carro1); 
	
	return 0;
}
```

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%202.c)  

---

### Exercício 3 
**Descrição:**  

-  Analise o código de programa abaixo, execute em seu computador e comente cada linha, explicando o  código.

```
#include <stdio.h>

int calcularResultado(int v[], int n); 

int main(){ 
	int vetor[5], i, resultado; 
	
	for(i = 0; i < 5; i++){ 
		vetor[i] = i*2; 
	}
	
	resultado = calcularResultado(vetor, 5); 
	
	printf("O resultado é: %i\n", resultado); 
	
	return 0;
} 

int calcularResultado(int v[], int n){ 
	int i, soma = 0; 
	
	for(i = 0; i < n; i++){ 
		soma += v[i]; 
	} 
	
	return soma; 
}
```

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%203.c)

---

### Exercício 4  
**Descrição:**  

-  Faça um programa que chama uma função para calcular a média aritmética de 4 notas de um aluno,  imprima a média e mensagem aprovado se média maior ou igual a 7 e reprovado caso contrário.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%204.c) 

---

### Exercício 5  
**Descrição:**  

-  Escreva um algoritmo em C que utilize uma função para exibir todos os números ímpares de 1 até um  número fornecido pelo usuário, exceto os múltiplos de 7. 

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%205.c)  

---

### Exercício 6  
**Descrição:**  

- Crie um vetor em C com valores digitados pelo usuário, crie uma (função para somar os valores), calcule  a média dos valores e imprima o resultado da soma e a média no console.
  
🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%206.c)

---

### Exercício 7 
**Descrição:**  

- Crie um vetor em C com valores digitados pelo usuário, crie uma função para encontrar o maior valor,  imprima no console o maior valor e sua posição no vetor (suponha que não há números repetidos no  vetor).

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%207.c)

---

### Exercício 8  
**Descrição:**  

-  Escreva um algoritmo em C que utiliza uma função para exibir todos os números pares de 1 até um  número fornecido pelo usuário. A função deve ter a seguinte assinatura: 
void exibirPares(int numero);

    Dentro do algoritmo principal (main), solicite ao usuário um número inteiro e chame a função  exibirPares, passando o número fornecido como argumento. Utilize um laço de repetição (while ou for)  dentro da função para exibir os números pares.

    Exemplo: Caso o usuário digite o número 10, o algoritmo deve exibir como resposta: 2, 4, 6, 8, 10
  
🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%208.c)

---

### Exercício 9  
**Descrição:**  

- Escreva um algoritmo em C que cria um vetor com valores digitados pelo usuário, faça uma função para multiplicar os valores do vetor e imprime o resultado da multiplicação.
  
🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio%209.c)

---

### Exercício 10  
**Descrição:**  

- Escreva um algoritmo em C que receba dois números inteiros do usuário e exiba o maior deles, a  verificação do maior, deve ser feita dentro de uma função. Se os números forem iguais, exiba uma  mensagem indicando que eles são iguais. Utilize uma função com a seguinte assinatura: void  maiorNumero(int num1, int num2); 
  
🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio_10.c)

---

### Exercício 11  
**Descrição:**  

- Escreva um algoritmo em C que receba três números inteiros e exiba o menor deles. O programa deve  solicitar os valores ao usuário e utilizar uma função para retornar o menor valor com a seguinte  assinatura: int menorNumero(int num1, int num2, int num3);
    
🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio_11.c)

---

### Exercício 12 
**Descrição:**  

-  Escreva um algoritmo em C que preencha um vetor de 10 posições com números inteiros fornecidos pelo  usuário. Após o preenchimento, crie uma função para exibir os números na ordem inversa.
     
🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio_12.c)

---

### Exercício 13  
**Descrição:**  

-  Escreva um algoritmo em C que utilize uma função para calcular a média de três números inteiros  fornecidos pelo usuário. A função deve ter a seguinte assinatura: float calcularMedia(int num1, int num2,  int num3); 

    O algoritmo deve imprimir a média com duas casas decimais.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio_13.c)

---

### Exercício 14 
**Descrição:**  

-  Escreva um programa em C que faz o seguinte:

    Crie um vetor de 10 posições, preencha cada posição com o valores de 1 até 10. 

    Some todos os elementos do vetor e armazene o resultado em uma variável. 

    Escreva uma função chamada calcularResultado que recebe três parâmetros inteiros: a soma dos  elementos do vetor, o primeiro valor do vetor, e o último valor do vetor. 

    A função deve retornar a seguinte expressão: resultado = soma + (primeiroValor * 5) + (ultimoValor * 2).

    No main, imprima o resultado dessa função.
  
🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/2%C2%B0%20Semestre%20-%202024_2/Algoritmos%20e%20Estruturas%20de%20Dados%20II/Atividade%203/Exerc%C3%ADcio_14.c)

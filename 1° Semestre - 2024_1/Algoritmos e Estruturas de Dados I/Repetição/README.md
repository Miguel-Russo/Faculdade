# 🖥️ Beecrowd - Problemas Resolvidos  

Bem-vindo(a)! Este repositório contém soluções para diversos problemas da plataforma Beecrowd em linguagem C, organizados por número e descrição.  

Cada problema é descrito abaixo com sua entrada, saída e link para o código correspondente.  

---

## 📄 Lista de Problemas - Repetição

### 1114 - Senha Fixa  
**Descrição:**  
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002.

- **Entrada:** A entrada é composta por vários casos de testes contendo valores inteiros. 
- **Saída:** Para cada valor lido mostre a mensagem correspondente à descrição do problema.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Repeti%C3%A7%C3%A3o/1114%20-%20Senha%20Fixa.c)

---

### 1132 - Múltiplos de 13
**Descrição:**  
Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.

- **Entrada:** O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.  
- **Saída:** Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso. 

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Repeti%C3%A7%C3%A3o/1132%20-%20M%C3%BAltiplos%20de%2013.c)  

---

### 1133 - Resto da Divisão
**Descrição:**  
Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

- **Entrada:** O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.  
- **Saída:** Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente. 

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Repeti%C3%A7%C3%A3o/1133%20-%20Resto%20da%20Divis%C3%A3o.c)

---

### 1143 - Quadrado e ao Cubo  
**Descrição:**  
Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

- **Entrada:** O arquivo de entrada contém um número inteiro positivo N.  
- **Saída:** Imprima a saída conforme o exemplo fornecido.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Repeti%C3%A7%C3%A3o/1143%20-%20Quadrado%20e%20ao%20Cubo.c) 

---

### 1151 - Fibonacci Fácil 
**Descrição:**  
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

- **Entrada:** O arquivo de entrada contém um valor inteiro N (0 < N < 46).
- **Saída:** Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver espaço após o último valor. 

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Repeti%C3%A7%C3%A3o/1151%20-%20Fibonacci%20F%C3%A1cil.c)  

---

### 1153 - Fatorial Simples  
**Descrição:**  
Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

- **Entrada:** A entrada contém um valor inteiro N (0 < N < 13).  
- **Saída:** A saída contém um valor inteiro, correspondente ao fatorial de N.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Repeti%C3%A7%C3%A3o/1153%20-%20Fatorial%20Simples.c)

---

### 1157 - Divisores I
**Descrição:**  
Ler um número inteiro N e calcular todos os seus divisores.

- **Entrada:** O arquivo de entrada contém um valor inteiro. 
- **Saída:** Escreva todos os divisores positivos de N, um valor por linha. 

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Repeti%C3%A7%C3%A3o/1157%20-%20Divisores%20I.c)  

---

### 1165 - Número Primo 
**Descrição:**  
Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

- **Entrada:** A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.
- **Saída:** Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Repeti%C3%A7%C3%A3o/1165%20-%20N%C3%BAmero%20Primo.c) 

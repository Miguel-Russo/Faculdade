# 🖥️ Beecrowd - Problemas Resolvidos  

Bem-vindo(a)! Este repositório contém soluções para diversos problemas da plataforma Beecrowd, organizados por número e descrição.  

Cada problema é descrito abaixo com sua entrada, saída e link para o código correspondente.  

---

## 📄 Lista de Problemas - Vetores e Matrizes

### 1172 - Substituição em Vetor I  
**Descrição:**  
Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

- **Entrada:** A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.  
- **Saída:** Para cada posição do vetor, escreva "X[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Vetores%20e%20Matriz/1172%20-%20Substitui%C3%A7%C3%A3o%20em%20Vetor%20I.c)

---

### 1173 - Preenchimento de Vetor I 
**Descrição:**  
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

- **Entrada:** A entrada contém um valor inteiro (V<=50).  
- **Saída:** Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor armazenado na posição i. O primeiro número do vetor N (N[0]) irá receber o valor de V. 

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Vetores%20e%20Matriz/1173%20-%20Preenchimento%20de%20Vetor%20I.c)  

---

### 1176 - Fibonacci em Vetor 
**Descrição:**  
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

- **Entrada:** A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.
- **Saída:** Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Vetores%20e%20Matriz/1176%20-%20Fibonacci%20em%20Vetor.c)

---

### 1179 - Preenchimento de Vetor IV  
**Descrição:**  
Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

- **Entrada:** A entrada contém 15 números inteiros.
- **Saída:** Imprima a saída conforme o exemplo abaixo.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Vetores%20e%20Matriz/1179%20-%20Preenchimento%20de%20Vetor%20IV.c) 

---

### 1180 - Menor e Posição 
**Descrição:**  
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

- **Entrada:** A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros. A segunda linha contém cada um dos N valores, separados por um espaço. Vale lembrar que nenhuma entrada haverá números repetidos.  
- **Saída:** A primeira linha apresenta a mensagem “Menor valor:” seguida de um espaço e do menor valor lido na entrada. A segunda linha apresenta a mensagem “Posicao:” seguido de um espaço e da posição do vetor na qual se encontra o menor valor lido, lembrando que o vetor inicia na posição zero.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Vetores%20e%20Matriz/1180%20-%20Menor%20e%20Posi%C3%A7%C3%A3o.c)  

---

### 1181 - Linha na Matriz
**Descrição:**  
Neste problema você deve ler um número, indicando uma linha da matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, demonstrando os elementos que deverão ser considerados na operação.

![Linha na Matriz](https://resources.beecrowd.com/gallery/images/problems/UOJ_1181.png)

- **Entrada:** A primeira linha de entrada contem um número L (0 ≤ L ≤ 11) indicando a linha que será considerada para operação. A segunda linha de entrada contém um único caractere Maiúsculo T ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz, sendo que a mesma é preenchida linha por linha, da linha 0 até a linha 11, sempre da esquerda para a direita. 
- **Saída:** Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Vetores%20e%20Matriz/1181%20-%20Linha%20na%20Matriz.c)

---

### 1183 - Acima da Diagonal Principal 
**Descrição:**  
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal da matriz, conforme ilustrado abaixo (área verde).

![Acima da Diagonal Principal](https://resources.beecrowd.com/gallery/images/problems/UOJ_1183.png)

- **Entrada:** A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.  
- **Saída:** Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal. 

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Vetores%20e%20Matriz/1183%20-%20Acima%20da%20Diagonal%20Principal.c)  

---

### 1187 - Área Superior  
**Descrição:**  
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área superior da matriz, conforme ilustrado abaixo (área verde).

![Área Superior](https://resources.beecrowd.com/gallery/images/problems/UOJ_1187.png)

- **Entrada:** A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem 144 valores com ponto flutuante de dupla precisão que compõem a matriz.
- **Saída:** Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/blob/main/1%C2%B0%20Semestre%20-%202024_1/Algoritmos%20e%20Estruturas%20de%20Dados%20I/Vetores%20e%20Matriz/1187%20-%20%C3%81rea%20Superior.c) 

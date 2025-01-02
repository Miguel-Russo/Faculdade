package atividade_1;

import java.util.Scanner;

public class Atividade_1 {

    public static void main(String[] args) {
       Scanner scan = new Scanner(System.in);
       CalcularMedia Aluno1 = new CalcularMedia();
       double Resultado;
       
       System.out.println("Digite a nota da prova: ");
       Aluno1.Prova = scan.nextDouble();
       
       System.out.println("Digite a nota do trabalho: ");
       Aluno1.Trabalho = scan.nextDouble();
       
       Resultado = Aluno1.CalcularMediaPonderada(Aluno1.Prova, Aluno1.Trabalho);
       
       System.out.println("Media Final = " + Resultado);
    }
    
}

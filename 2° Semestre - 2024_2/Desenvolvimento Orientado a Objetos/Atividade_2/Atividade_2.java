package atividade_2;

import java.util.Scanner;

public class Atividade_2 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Restante_Universidade Obj1 = new Restante_Universidade();
        double Resultado;
        
        System.out.println("Informe o valor arrecadado com as inscrições: ");
        Obj1.Arrecadacao = scan.nextDouble();
        
        System.out.println("Informe a quantidade de fiscais: ");
        Obj1.Fiscais = scan.nextInt();
        
        System.out.println("Informe o valor gasto em alimentação: ");
        Obj1.Alimentacao = scan.nextDouble();
        
        Resultado = Obj1.Restante(Obj1.Arrecadacao, Obj1.Fiscais, Obj1. Alimentacao);
        
        System.out.println("O restante para a faculdade é: " + Resultado);
    }
    
}

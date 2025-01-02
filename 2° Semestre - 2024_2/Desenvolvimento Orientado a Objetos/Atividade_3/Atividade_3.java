package atividade_3;

import java.util.Scanner;

public class Atividade_3 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Calcular calc = new Calcular();
        int opcao;
        boolean continuar = true;
        
        while(continuar){
            
            System.out.println("Escolha a operação desejada: ");
            System.out.println("1. Soma");
            System.out.println("2. Subtração");
            System.out.println("3. Multiplicação");
            System.out.println("4. Divisão");
            System.out.println("5. Sair");
            
            opcao = scan.nextInt();
            
            if(opcao == 5){
                continuar = false;
                System.out.println("Encerrando a calculadora.");
            }
            else{
                System.out.println("Digite o primeiro número: ");
                calc.N1 = scan.nextDouble();
                
                System.out.println("Digite o segundo número: ");
                calc.N2 = scan.nextDouble();
            
            switch (opcao){
                case 1:
                    calc.Soma();
                    System.out.println("Resultado da soma: " + calc.getResultadoFormatado());
                    break;
                case 2:
                    calc.Subtracao();
                    System.out.println("Resultado da subtração: " + calc.getResultadoFormatado());
                    break;
                case 3:
                    calc.Multiplicacao();
                    System.out.println("Resultado da multiplicação: " + calc.getResultadoFormatado());
                    break;
                case 4:
                    calc.Divisao();
                    System.out.println("Resultado da divisão: " + calc.getResultadoFormatado());
                    break;
                default:
                    System.out.println("Opção inválida. Tente novamente.");
            }
          }
            
            
            if(continuar){
                System.out.println("Deseja realizar outra operação (S/N): ");
                char resposta = scan.next().charAt(0);
                if(resposta == 'N' || resposta == 'n'){
                    continuar = false;
                    System.out.println("Encerrando a calculadora.");
                }
            }
        }
        
        
    }
    
}

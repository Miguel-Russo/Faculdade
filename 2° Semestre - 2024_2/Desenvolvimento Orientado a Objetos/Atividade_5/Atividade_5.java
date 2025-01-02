package atividade_5;

import java.util.Scanner;
import java.text.DecimalFormat;

public class Atividade_5 {

    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        DecimalFormat duasCasas = new DecimalFormat("0.00");
        Aluno Alu01 = new Aluno();
        double Media = 0;
        
        System.out.println("Digite seu nome: ");
        Alu01.Nome = scan.next();
        
        System.out.println("Informe sua 1°Nota: ");
        Alu01.Nota1 = scan.nextDouble();
        System.out.println("Informe sua 2°Nota: ");
        Alu01.Nota2 = scan.nextDouble();
        System.out.println("Informe sua 3°Nota: ");
        Alu01.Nota3 = scan.nextDouble();
        
        Media = Alu01.MediaAluno(Alu01.Nota1, Alu01.Nota2, Alu01.Nota3);
        
        System.out.println("Media: " + duasCasas.format(Media));
    }
    
}

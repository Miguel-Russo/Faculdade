package atividade_4;



public class Atividade_4 {

    public static void main(String[] args) {
        Aluno X1 = new Aluno();
        Aluno X2 = new Aluno();
        
        double Media1 = 0;
        String Res1;
        
        double Media2 = 0;
        String Res2;
        
        X1.Nome = "Paulo";
        X1.Codmat = 55123;
        X1.CPF = "800912345-12";
        X1.Sexo = 'M';
        X1.Nota_P1 = 7;
        X1.Nota_P2 = 6;
        X1.Nota_P3 = 8;
        
        X2.Nome = "Ana";
        X2.Codmat = 991239;
        X2.CPF = "500876123-15";
        X2.Sexo = 'F';
        X2.Nota_P1 = 2;
        X2.Nota_P2 = 6;
        X2.Nota_P3 = 9;
        
        X1.ImprimeAluno();
        X1.ImprimeSexo();
        Media1 = X1.MediaAluno(X1.Nota_P1, X1.Nota_P2, X1.Nota_P3);
        System.out.println("Média Final: " + Media1);
        Res1 = X1.Resultado(Media1);
        System.out.println(Res1);
        
        System.out.println("");
        
        X2.ImprimeAluno();
        X2.ImprimeSexo();
        Media2 = X2.MediaAluno(X2.Nota_P1, X2.Nota_P2, X2.Nota_P3);
        System.out.println("Média Final: " + Media2);
        Res2 = X2.Resultado(Media2);
        System.out.println(Res2);
               
    }
    
}

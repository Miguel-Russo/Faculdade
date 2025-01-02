package atividade_5;

public class Aluno {
   String Nome;
   double Nota1;
   double Nota2;
   double Nota3;
   
   public double MediaAluno(double X, double Y, double Z){
       double Resultado;
       
       Resultado = (X + Y + Z)/3;
       
       if(Resultado > 7){
           Resultado = Resultado + (Resultado * 10)/100;
       }
       
       if(Resultado < 3){
           System.out.println("Reprovado");
       }
       
       return Resultado;
       
   }
}

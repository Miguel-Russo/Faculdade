package atividade_4;



public class Aluno {
    String Nome;
    int Codmat;
    String CPF;
    char Sexo;
    double Nota_P1;
    double Nota_P2;
    double Nota_P3;
    
    public void ImprimeAluno(){
        System.out.println("Nome: " + Nome);
        System.out.println("Código de Matrícula: " + Codmat);
        System.out.println("CPF: " + CPF);
        System.out.println("Sexo: " + Sexo);
        System.out.println("1° Nota: " + Nota_P1);
        System.out.println("2° Nota: " + Nota_P2);
        System.out.println("3° Nota: " + Nota_P3);
    }
    
    public void ImprimeSexo(){
        if(Sexo == 'M' || Sexo == 'm'){
            System.out.println(Nome);
            System.out.println("Sexo: Masculino");
        }
        
        if(Sexo == 'F' || Sexo == 'f'){
            System.out.println(Nome);
            System.out.println("Sexo: Feminino");
        }
       
    }
    
    public double MediaAluno(double X, double Y, double Z){
        double Media = 0;
        if(X >= Y && Y >= Z){
            Media = (X + Y)/2;
        }
        else if(X >= Y && Z >= Y){
            Media = (X + Z)/2;
        }
        else{
            Media = (Y + Z)/2;
        }
        
        return Media;
    }
    
    public String Resultado(double A){
        String Res;
        
        if(A >= 6){
            Res = "Situação: Aprovado";
        }
        else{
            Res = "Situação: Reprovado";
        }
        
        return Res;
    }
    
    
}

package atividade_3;

public class Calcular {
    double N1, N2, Res;
    
    public void Soma(){
        Res = N1 + N2;
    }
    
    public void Subtracao(){
        Res = N1 - N2;
    }
    
    public void Multiplicacao(){
        Res = N1 * N2;
    }
    
    public void Divisao(){
        if(N2 != 0){
            Res = N1 / N2;
        }
        else{
            System.out.println("Divisão por 0 não é permitido!");
            Res = 0;
        }
    }
    
    public String getResultadoFormatado(){
        return String.format("%.2f", Res);
    }
    
}

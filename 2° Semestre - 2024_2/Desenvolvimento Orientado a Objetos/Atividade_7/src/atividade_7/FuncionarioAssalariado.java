package atividade_7;


public class FuncionarioAssalariado extends Funcionario {
    private double salarioMensal;

    public FuncionarioAssalariado(String nome, String cargo, double salarioMensal) {
        super(nome, cargo);
        this.salarioMensal = salarioMensal;
    }

    
    @Override
    public double calcularSalario() {
        return salarioMensal;
    }
}

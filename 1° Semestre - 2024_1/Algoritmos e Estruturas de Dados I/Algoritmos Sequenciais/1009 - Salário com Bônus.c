#include <stdio.h>
 
int main() {
 
    char Nome[20];
    double Salario, Vendas, Total;
    
    scanf("%s", &Nome);
    scanf("%lf", &Salario);
    scanf("%lf", &Vendas);
    
    Total = Salario + (Vendas * 15 / 100);
    
    printf("TOTAL = R$ %.2lf\n", Total);
 
    return 0;
}

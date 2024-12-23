#include <stdio.h>
 
int main() {
 
    double renda, imposto;
    
    scanf ("%lf", &renda);
    
    if (renda <= 2000){
        printf ("Isento\n");
    }
    else if (renda <= 3000){
        imposto = ((renda - 2000)*0.08); 
        printf ("R$ %.2lf\n", imposto);
    }
    else if (renda <= 4500){
        imposto = (((renda - 3000)*0.18) + 1000 * 0.08);
        printf ("R$ %.2lf\n", imposto);
    }
    else {
        imposto = ((((renda - 4500)* 0.28)+ 1500 * 0.18)+ 1000 *0.08);
        printf ("R$ %.2lf\n", imposto);
    }
 
    return 0;
}

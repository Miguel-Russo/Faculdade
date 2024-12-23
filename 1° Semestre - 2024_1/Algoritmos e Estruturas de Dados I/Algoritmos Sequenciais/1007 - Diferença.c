#include <stdio.h>
 
int main() {
 
    int A, B, C, D, Dif;
    
    scanf ("%i", &A);
    scanf ("%i", &B);
    scanf ("%i", &C);
    scanf ("%i", &D);
    
    Dif = (A*B - C*D);
    
    printf ("DIFERENCA = %i\n", Dif);
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
    int Anos, Meses, N;
    
    scanf ("%i", &N);
    
    Anos = N/365;
    N = N - (Anos * 365);
    
    Meses = N/30;
    N = N - (Meses * 30);
    
    printf ("%i ano(s)\n", Anos);
    printf ("%i mes(es)\n", Meses);
    printf ("%i dia(s)\n", N);
    
    return 0;
}

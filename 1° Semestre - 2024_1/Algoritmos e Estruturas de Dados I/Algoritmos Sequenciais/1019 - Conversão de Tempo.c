#include <stdio.h>
 
int main() {
 
    int Hora, Minuto, N;
    
    scanf ("%i", &N);
    
    Hora = N/3600;
    N = N - (Hora * 3600);
    
    Minuto = N/60;
    N = N - (Minuto * 60);
    
    printf ("%i:%i:%i\n", Hora, Minuto, N);
 
    return 0;
}

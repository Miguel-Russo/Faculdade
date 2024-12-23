#include <stdio.h>
 
int main() {
 
    int N;
    int fat = 1;
    int cont = 1;
    
    scanf ("%i", &N);
    
    for (cont = 1; cont <= N; cont++) {
        fat = fat * cont;
    }
    
    printf ("%i\n", fat);
    
 
    return 0;
}

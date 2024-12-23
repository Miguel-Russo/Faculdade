#include <stdio.h>
 
int main() {
 
    int X, N[10], i;
    
    scanf("%i", &X);
    
    N[0] = X;
    
    for(i = 1; i < 10; i++){
        N[i] = N[i - 1] * 2;
    }
    
    for(i = 0; i < 10; i++){
        printf("N[%i] = %i\n", i, N[i]);
    }
 
    return 0;
}

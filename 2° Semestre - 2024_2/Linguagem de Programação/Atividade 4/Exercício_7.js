function somaEntre (X, Y){
    let Temp, i;
    let Soma = 0;
    
    if (X > Y){
        Temp = X;
        X = Y;
        Y = Temp;
    }
    
    for(i = X+1; i <= Y-1; i++){
        Soma = Soma + i;
    }
    
    return Soma;
}
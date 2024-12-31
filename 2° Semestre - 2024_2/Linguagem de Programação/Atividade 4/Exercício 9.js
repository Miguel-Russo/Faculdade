let somaEntre = function (X, Y){
    let Temp, i, Soma = 0;
    
    if(X > Y){
        Temp = X;
        X = Y;
        Y = Temp;
    }
    
    for (i = X+1; i < Y; i++){
        Soma += i;
    }
    
    return Soma;
    
};
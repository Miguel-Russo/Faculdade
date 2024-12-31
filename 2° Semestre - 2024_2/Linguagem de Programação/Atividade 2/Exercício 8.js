function somaEntre(limiteInferior, limiteSuperior){
    let Temp, i, Soma = 0;
    
    if(limiteSuperior < limiteInferior){
        
        Temp = limiteSuperior;
        limiteSuperior = limiteInferior;
        limiteInferior = Temp;
    }
    
    for(i = limiteInferior; i <= limiteSuperior; i++){
        Soma = Soma + i;
    }
    
    return Soma;
}
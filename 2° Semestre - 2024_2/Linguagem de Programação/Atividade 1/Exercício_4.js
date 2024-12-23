function notaFinal(N1, AI, AP, N3){
    let N2, NF;
    
    N2 = (AI + AP)/2;
    NF = (N1 + N2)/2;
    
    if(NF >= 6){
        console.log ("Passou com: " + NF);
    }
    else{
        if(N1 <= N2){
            NF = (N3 + N2)/2;
        }
        else{
            NF = (N1 + N3)/2;
        }
    
        if(NF >= 6){
            console.log ("Passou com: " + NF);
        }
        else{
            console.log ("Reprovou com: " + NF);
        }
    }
}
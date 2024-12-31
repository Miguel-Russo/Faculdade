let Menor = function (X, Y, Z){

    if(X < Y && X < Z){
        return X;
    }
    else if(Y < X && Y < Z){
        return Y;
    }
    else{
        return Z;
    }
    
};
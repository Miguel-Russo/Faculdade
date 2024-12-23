function umDoisTres(X){
    if(X % 2 == 0 && X > 10){
        return 1;
    }
    else if(X % 2 != 0 || X < 0){
        return 2;
    }
    else{
        return 3;
    }
}
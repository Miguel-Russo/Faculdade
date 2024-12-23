let X, Y, Z;

X = parseInt(prompt("Digite o 1° número: "));
Y = parseInt(prompt("Digite o 2° número: "));
Z = parseInt(prompt("Digite o 3° número: "));

if(X < Y && X < Z){
    alert ("O 1° número é o menor. Número = " + X);
}
else if(Y < X && Y < Z){
    alert ("O 2° número é o menor. Número = " + Y);
}
else{
    alert ("O 3° número é o menor. Número = " + Z);
}
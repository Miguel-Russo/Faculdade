let msg = prompt("Digite uma mensagem: ");
let tempo = Number(prompt("Digite um tempo em segundos: "));

setTimeout(() => console.log(msg), tempo*1000);
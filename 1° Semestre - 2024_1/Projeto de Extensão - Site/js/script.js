//Langing Botão
let escondido = true;

function mostrarOcultar(){
    let div = document.getElementById('escondido');
    if(escondido){
        div.style.visibility = 'visible';
        escondido = false;
    } else {
        div.style.visibility = 'hidden';
        escondido = true;
    }
}

document.getElementById('botao_landing').addEventListener('click', () => mostrarOcultar());




//Contatos
const form = document.getElementById('contatos_formulario');
const emailButton = document.getElementById('contatos_botao');

emailButton.addEventListener('click', (event) => {
    event.preventDefault();

    const name = document.getElementById('name').value;
    const email = document.getElementById('email').value;
    const emailQuadraLimp = 'quadralimp@gmail.com';

    const message = document.getElementById('mensagem').value;


    // Cria o link direto para o Gmail (ajuste para o seu cliente de e-mail)
    const gmailLink = `https://mail.google.com/mail/u/0/?view=cm&to=${encodeURIComponent(emailQuadraLimp)}&subject=Nova%20Mensagem&body=${encodeURIComponent(message)}%0A${encodeURIComponent(name)}`;
    window.open(gmailLink, '_blank'); // Abre o link em uma nova aba
});
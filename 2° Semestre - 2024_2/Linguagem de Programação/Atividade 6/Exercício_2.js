async function asyncCounter(X) {
    for (let i = 1; i <= 5; i++) {
        await new Promise(resolve => setTimeout(resolve, X * 1000));
        console.log(i);
    }
}
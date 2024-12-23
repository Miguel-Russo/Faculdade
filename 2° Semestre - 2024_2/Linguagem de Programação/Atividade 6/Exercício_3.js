function delayed(value, ms) {
    return new Promise(resolve => { setTimeout(() => { resolve(value); }, ms); });
}
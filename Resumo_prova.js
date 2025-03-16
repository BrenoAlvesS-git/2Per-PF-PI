const somar = (a,b,c) =>{
    return a+b+c
}
const multi = (a,b) =>{
    return a*b
}

//função de alta ordem
const executar = (fn, ...params)=>{
    return `${fn(...params)}`
    }


const r1 = executar(soma,4,5,6)
console.log(r1)


//RECURSIVIDADE

const soma = (lista)=>{
    if (lista.length == 0){
        return 0
    }else{
        const [x, ...xs] = lista
        return x + soma(xs)
    }
}

//QUESTÃO 1 Lista 4

const enesimo = (n)=>{
    if (n == 1){
        return 3
    }else{
        return 2 * enesimo(n-1)
    }
}

//QUESTÃO 2 lista 4
const fibonacci = (n)=>{
    if (n===0){
        return 0
    }else if(n===1){
        return 1
    }else{
        return fibonacci(n-1) + fibonacci(n-2)
    }
}

//QUESTÃO 3 lista 4
const somaN = (n)=>{
    if (n==0){
        return 0
    }else{
        return n + somaN(n-1)
    }
}
//QUESTÃO 4 lista 4
const fatorial = (n) =>{
    if(n==0){
        return 1
    }else{
        return n * fatorial(n - 1)
    }
}

//QUESTÃO 5 lista 4

const potencia2 = (n)=>{
    if(n==0){
        return 1
    }else{
        return 2 * potencia(n-1)
    }
}

//QUESTÃO 6 lista 4

const resto = (n,m)=>{
    if(n<m){
        return n
    }else{
        return resto(n-m, m)
    }
}

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
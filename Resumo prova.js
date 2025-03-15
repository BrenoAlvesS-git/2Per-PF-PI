const soma = (a,b,c) =>{
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
//LISTA 2 USANDO NOTAÇÃO ARROW
const saudacao = () => "Exemplo"
console.log(saudacao())

const dobro = n => n*2
console.log(dobro(5))

const calcula =(a,b)=>{
    const soma = a + b
    const produto = a * b
    return ` Soma: ${soma}, Produto: ${produto} `
}

//QUESTÃO 1

const retangulo = (base,altura) => base*altura
console.log(retangulo(5,2))

//QUESTÃO 2

const circulo = ()=>{
    const pi = 3.1415
    const raio = 5
    const area = (pi *(raio)**2)
    return `A area é ${area}`
}

//QUESTÃO 3

const verificaTriangulo = (l1,l2,l3)=>{
    if (l1 < l2+l3 && l2< l1+l3 && l3 < l1+l2){
        console.log("É triangulo")
    }else 
        console.log("Não é triangulo")
}

//QUESTÃO 4
const classificaTriang = (lado1,lado2,lado3)=>{
    if (lado1==lado2 && lado2==lado3){
        console.log("Equilatero")
    }else if (lado1==lado2 || lado2 == lado3|| lado1 ==lado3){
        console.log("Isoseles")
    }else
        console.log("escaleno")
}

//QUESTÃO 5
const distEuclidiana = (x1,x2,y1,y2)=>{
    return Math.sqrt ((x2-x1)**2 + (y2-y1)**2)
}

//QUESTÃO 6
const diferente = (num1,num2,num3)=>{
    if (num1 == num2 && num2 ==num3){
        console.log("3");
    }else if (num1 == num2 || num2==num3 || num1 == num3){
        console.log("2")
    }else
        return "1"
       
}

//QUESTÃO 7
const menorValor = (num1,num2,num3)=>{
    if (num1 <= num2 && num1 <= num3){
        return num1
    }
    else if (num2 <= num3 && num2<= num1){
        return num2
    }
    else {
        return num3
    }
}
//QUESTÃO 8
const elevaQuarta = (num)=>{
    num = (num**4)
    return num
}

//QUESTÃO 9 
const ouExclusivo = (a,b)=>{
    const ou = a || b
    const naoE = !(a && b)
    return ou && naoE
}

//QUESTÃO 10
const nomeInverso = (nome, sobrenome)=>{
    return sobrenome + " " + nome
}

//QUESTÃO 11
const maiorQueMedia = (num1,num2,num3)=>{
    const media = (num1+num2+num3)/3
    if (media < num1){
        if (media < num2){
            if(media < num3){
                return 3
            }
            return 2
        }
        return 1
    }else{
        return 0
    }
}
//QUESTÃO 11 OTIMIZADA PELO GPT :(
const maiorQueMedia2 = (num1,num2,num3)=>{
    const media = (num1+num2+num3)/3
    let count = 0

    if (num1>media) count++
    if (num2>media) count++
    if (num3>media) count++
    
    return count
} 




//QUESTÃO 12
const bhaskara = (a, b, c,raiz, eqpos,eqneg)=>{
    if (a!== 0){
        delta = ((b*b)-(4*a*c))
        eqpos = (-b)+Math.sqrt(delta)/(2*a)
        eqneg = ((-b)-Math.sqrt(delta))/(2*a)
        console.log(eqpos, eqneg)
    }else{
        console.log("a = 0")
    }
}
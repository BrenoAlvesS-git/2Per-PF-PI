//Questão 1
/*
function calcularareadeumRetangulo(){
    const base   = 5
    const altura = 2
    return base * altura
}
console.log (calcularareadeumRetangulo())
*/

//Questão 2 
/*
function areaCircun(raio){
    const pi = 3.1415
    return pi * (raio**2)

}
console.log(areaCircun(5))
*/

//Questão 3

/*
function verificaTriangulo(l1, l2, l3) {
    if (l1 + l2 >= l3 && l2 + l3 >= l1 && l1 + l3 >= l2) {
        console.log(true)
    } 
        else {
        console.log(false)
    }
}

*/
//questão 4
/*
function equiIsoEscTeste (lado1, lado2, lado3){
    if(lado1 == lado2 && lado2 == lado3) {
        console.log("equilatero")
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3 ){
        console.log("Isoceles")
    }
    else{
        console.log("escaleno")
    }
}
*/

//Questão 5

/*
function distEuclidiana(x1,x2,y1,y2){
    return Math.sqrt ((x2-x1)**2 + (y2-y1)**2)
}
console.log(distEuclidiana(3,7,5,11))
*/

//Questão 6
/*
function verificaIgualdade(a, b, c){
    if (a==b && b==c){
        console.log(3)
    }
    else if (a !=b && a != c && b != c){
        console.log(0)
    }
    else console.log(2) 

}
*/

//Questão 07
/*
function menorValor(x, y, z){
    if(x <= y && x <= z){
        console.log (x)
    }
    else if (y <= x && y <= z){
        console.log(y)
    }
    else console.log (z)

}
*/

//Questão 08
/*
function quartPotencia(x){
    return(x**2)**2
}
console.log(quartPotencia(2))
*/
//Questão 09

//Questão 10 
/*
function nomeOrdemInversa(nome,sobrenome){
    return sobrenome + " " + nome

}
console.log(nomeOrdemInversa("Breno", "Alves"))
*/

//Questão 11
/*
function maiorQueMedia(num1,num2,num3){
    let media = (num1+num2+num3)/3
    if (num1 >= media){
        console.log(num1)
    }
    else if (num2 >= media){
        console.log(num2)
    }
    else 
        console.log(num3)

}
*/
/*
//Questão 12
function eq2grau(a,b,c){
    let discriminante = (b**2 - 4*a*c)
    if (discriminante >= 0){
        eqpos = (-b + Math.sqrt(discriminante))/(2 * a)
        console.log(eqpos)
        eqneg = (-b - Math.sqrt(discriminante))/(2*a)
        console.log(eqneg)
    }
    else 
        console.log("Não existe raiz")
}
eq2grau(2,-3,-5)
*/

//Questão 13
//Questão 14
function numPorExtenso(numero){
    if (numero == 0){
        console.log("ZERO")
    }
    else if (numero == 1){
        console.log("UM")
    }
    else if (numero == 2){
        console.log("DOIS")
    }
    else if (numero == 3){
        console.log("TRÊS")
    }
    else if (numero == 4){
        console.log("QUATRO")
    }
    else if (numero == 5){
        console.log("CINCO")
    }
    else if (numero == 6){
        console.log("SEIS")
    }
    else if (numero == 7){
        console.log("SETE")
    }
    else if (numero == 8){
        console.log("OITO")
    }
    else if (numero == 9){
        console.log("NOVE")
    }
    else{
        console.log("Valor invalido")
    }
}

//Questão 14 (usando array)
function numPorExtensoVetorial(numero1){
    const numeros = [   
        "ZERO","UM","DOIS","TRÊS","QUATRO","CINCO",
        "SEIS","SETE","OITO","NOVE"
    ]
    if (numero1 >= 0 && numero1 <=9){
        console.log(numeros[numero1])
    }
    else{
        console.log("Valor invalido")
    }
}

//LISTA 5
//Q3

lista = [2,1,3,4,5,2]
const tamanhoList = (lista)=> lista.lenght
console.log(tamanhoList)









//LISTA COM 5 ELEM [100,80,60,120,90] DEVOLVER SOMA USANDO MAP

const lista = [100, 80, 60, 120,90]
const soma = lista.map(num => num).reduce((acc, num) => acc + num, 0)
console.log(soma)













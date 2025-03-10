//LISTA 2 USANDO FUNÇÃO ANONIMA

//QUESTÃO 1
const calcularAreaRetangulo = (base, altura) => base*altura
const base = 5
const altura = 10
const area = calcularAreaRetangulo(base, altura)
console.log(`A área do retangulo é: ${area}`)

//QUESTÃO 2
const areaCircunf = (raio,pi) => pi*(raio**2)
const raio = 20
const pi = 3.1415
const areaCirc = areaCircunf(raio,pi)
console.log(`A aréa da circunferencia é: ${areaCirc}`)

//QUESTÃO 3
const verificaTrian = (l1,l2,l3)=> l1<l2+l3 && l2<l1+l3 && l3<l2+l1
const l1 = 10
const l2 = 5
const l3 = 8
const verifica = verificaTrian(l1,l2,l3)
if (verifica){
    console.log(true)
}else{
    console.log(false)
}

//QUESTÃO 4
const classificaTriangulo = (lado1,lado2,lado3) =>{
    if (lado1==lado2 && lado2==lado3){
        return "Equilatero"
    }else if (lado1==lado2 || lado2 == lado3|| lado1 ==lado3){
        return "Isoseles"
    }else{
        return "escaleno"}    
const lado1 = 10
const lado2 = 10
const lado3 = 10
const verificaTri = classificaTriangulo(lado1,lado2,lado3)

console.log(`O tipo do triangulo é ${verificaTri}`)
    }

//QUESTÃO 5
const distanEuclidiana = (x1,y1,x2,y2) =>{
    return Math.sqrt((x2-x1)**2 + (y2-y1)**2)}
const x1 = 10
const y1 = 10
const x2 = 10
const y2 = 10
const distancia = distanEuclidiana(x1,y1,x2,y2)
console.log(`A distancia euclidiana é ${distancia}`)


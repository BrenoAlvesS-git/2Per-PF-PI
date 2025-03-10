const subtrair = (x, y) => x - y
const somar = (x, y) => x + y
const multiplicar = (x, y) => x*y
const dividir = (x, y) => x/y
const concatenar = (x, y, sep=" ") => x+sep+y
const iniciais = (x, y) => x[0]+y[0]
const negativo = (x,y) => (x*-1) - (y*-1)

const exec = (f, x, y) => f(x, y)

const res = exec(Math.pow(multiplicar), 10,10)
const res1 = exec(subtrair, 50, 25)
const res2 = exec(somar, 50, 25)
const res3 = exec(multiplicar, 50, 25)
const res4 = exec(dividir, 50, 25)
const res5 = exec(concatenar, "Isaac", "Newton")
const res6 = exec(iniciais, "Isaac", "Newton")
const res7 = exec(negativo,30)

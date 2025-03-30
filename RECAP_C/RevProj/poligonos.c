#include "poligonos.h"
float calcPerimetroTriangulo(float a, float b, float c){
    return a + b + c;
}
float calcPerimetroRetangulo(float a, float b){
    return a + b;
}

float calcPerimetroCirculo(float r){
    return PI * r * 2;
}

float calcAreaTriangulo(float base, float altura){
    return (base * altura)/2;
}
#include "Escultura.h"
Escultura::Escultura(){
    material="-";
    volumen=0;
    peso=0;
}
void Escultura::setMaterial(string mat) {
    this->material=mat;
}
string Escultura::getMaterial(){
    return material;
}
void Escultura::setVolumen(float vol){
    this->volumen=vol;
}
float Escultura::getVolumen(){
    return volumen;
}
void Escultura::setPeso(float weight){
    this->peso=weight;
}
float Escultura::getPeso(){
    return peso;
}
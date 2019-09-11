#include "Pintura.h"
Pintura::Pintura(){
    //tecnica="-";
    Ancho=0;
    Alto=0;
}
//instances for Tecnica
void Pintura::setTecnica(string tech) {
    this->tecnica=tech;
}
string Pintura::getTecnica(){
    return tecnica;
}
//instances for Alto
void Pintura::setAlto(float alto){
    this->Alto=alto;
}

float Pintura::getAlto(){
    return Alto;
}
//instances for Ancho
void Pintura::setAncho(float ancho){
    this->Ancho=ancho;
}
float Pintura::getAncho() {
    return Ancho;
}

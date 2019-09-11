#include "ObraArte.h"
ObraArte::ObraArte(){
    titulo="-";
    autor="-";
    year =0;
}
void ObraArte::setTitulo(string valor) {
    this->titulo=valor;

}
string ObraArte::getTitulo(){
    return titulo;
}
void ObraArte::setAutor(string author){
    this->autor=author;

}
string ObraArte::getAutor(){
    return autor;
}
void ObraArte::setYear(int anio){
    this->year=anio;
}
int ObraArte::getYear(){
    return year;
}
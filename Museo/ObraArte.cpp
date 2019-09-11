#include "ObraArte.h"
ObraArte::ObraArte(){
    //titulo="";
    //autor="";
    //year =0;
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
void ObraArte::setYear(string anio){
    this->year=anio;
}
string ObraArte::getYear(){
    return year;
}
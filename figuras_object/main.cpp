#include <iostream>
using namespace std;
const int PI=3.1416,APOTEMA =6;
class figura{
private:
    double base,altura,lado;

public:
    void setBase(double);
    double getBase();
    void setAltura(double);
    double getAltura();
    void setLado(double);
    double getLado();


};
void figura::setBase(double ba){
    this->base = ba;
}
double figura::getBase() {
    return this->base;
}
void figura::setAltura(double alt) {
    this->altura=alt;
}
double figura::getAltura() {
    return this->altura;
}
void figura::setLado(double lad) {
    this->lado=lad;
}
double figura::getLado() {
    return this->lado;
}
//ends setting up the father class
class poligono:public figura{
public:
    //poligono();
    void setLados(int lados_q);
    double getLados();
    void setArea();
    double getArea();
    void setPeri();
    double getPeri();

private:
    double area,perimetro;
    int lados_i;

};
void poligono::setLados(int lados_q) {
    lados_i=lados_q;
}
double  poligono::getLados(){
    return lados_i;
}

void poligono::setPeri() {
    perimetro=(lados_i * getLado());
}

double poligono::getPeri() {
    return perimetro;
}
void poligono::setArea(){
    area=((perimetro*APOTEMA)/2);
}

double poligono::getArea() {
    return area;
}

//end poligonos class
class circulo{
public:
    void setDiametro(float dia);
    float getDiametro();
    void setRadio(float rad);
    float getRadio();
    void calArea();
    float getArea();
    void calPeri();
    float setPeri();

private:
    float diametro,radio,perimetro,area;
};
void circulo::setDiametro(float dia){
    diametro=dia;
}
float circulo::getDiametro(){
    return diametro;
}
void circulo::setRadio(float rad){
    radio=rad;
}
float circulo::getRadio(){
    return radio;
}
void circulo::calArea() {
    area=(PI*(radio*radio));
}
float circulo::getArea() {
    return area;
}
void circulo::calPeri() {
    perimetro=((2*PI)*radio);
}
float circulo::setPeri() {
    return perimetro;
}


//ends circulo class
class triangulo:public figura{
public:
    void calArea();
    double getArea();
    void calPer();

    double getPer();
private:
    double area,perimetro;
};
void triangulo::calArea() {
    this->area=((this->getBase()*this->getAltura())/2);
}

double triangulo::getArea(){
    return area;
}
void triangulo::calPer() {
    perimetro=getBase()*3;
}
double triangulo::getPer() {
    return perimetro;
}
//ends triagngulo class
class rectangulo:public figura{
public:

    void calcArea();
    double getArea();
    void calcPeri();
    double getPeri();

private:
    double area;
    double perimetro;

};

void rectangulo::calcArea(){
    this->area=(this->getBase()*this->getAltura());
}
double rectangulo::getArea() {
    return this->area;
}
void rectangulo::calcPeri() {
    perimetro=(this->getBase()*2+this->getAltura()*2);
}
double rectangulo::getPeri() {
    return perimetro;
}
//ends rectangulo class
class cuadrado:public figura{
public:
    void calcArea();
    double getArea();
    void setPerimetro();
    double getPerimetro();
private:

    double area;
    double perimetro;

};
//end cuadrado class instances

void cuadrado::calcArea(){
    this->area=(this->getLado()*this->getLado());
}
double cuadrado::getArea() {
    return this->area;
}
void cuadrado::setPerimetro(){
    this->perimetro = (this->getLado()*4);

}
double cuadrado::getPerimetro() {
    return this->perimetro;
}
int main() {
float radio_=0,diametro_=0,apotema=0,lado_=0,base_=0,altura_=0;
int lados;
char opc;
do {
    cout << "que desea hacer:\n" <<
         "1) cuadrado\n" <<
         "2) rectangulo\n" <<
         "3) triangulo\n" <<
         "4) circulo\n"<<
         "5) poligonos de 1 a 10 lados\n"<<
         "6) salir";

    cin >> opc;
    switch (opc) {
        case '1':
            cuadrado c;
            system("cls");
            cout << "inserte el lado\n";
            cin >> lado_;
            c.setLado(lado_);
            c.calcArea();
            c.setPerimetro();
            cout << "el area es " << c.getArea() << endl;
            cout << "el perimetro es: " << c.getPerimetro();
            system("pause");
            system("cls");
            break;
        case '2':
            rectangulo r;
            system("cls");
            cout << "inserte la base\n";
            cin >> base_;
            cout << "inserte la altura";
            cin >> altura_;
            r.setBase(base_);
            r.setAltura(altura_);
            r.calcArea();
            cout << "el area es: " << r.getArea();
            r.calcPeri();
            cout << "\nel perimetro es: " << r.getPeri()<<endl;
            system("pause");
            system("cls");
            break;
        case '3':
            triangulo t;
            system("cls");
            cout << "inserte la base" << endl;
            cin >> base_;
            cout << "inserte la altura" << endl;
            cin >> altura_;
            t.setBase(base_);
            t.setAltura(altura_);
            t.calArea();
            system("pause");
            system("cls");
            cout << "el area es: " << t.getArea() << endl;
            t.calPer();
            cout << "el perimetro es: " << t.getPer() << endl;
            system("pause");
            system("cls");
            break;
        case '4':
            circulo circle;
            system("cls");
            cout << "inserte el radio" << endl;
            cin >> radio_;
            cout << "inserte el diametro" << endl;
            cin >> diametro_;
            circle.setRadio(radio_);
            circle.setDiametro(diametro_);
            circle.calArea();
            system("pause");
            system("cls");
            cout << "el area es: " << circle.getArea() << endl;
            circle.calPeri();
            cout << "el perimetro es: " << circle.setPeri() << endl;
            system("pause");
            system("cls");
            break;
        case '5':
            poligono poli;
            system("cls");
            cout<<"cuantos lados tiene su poligono?";
            cin>>lados;
            if(lados>10){
                cout<<"numero de lados invalido\n";
                system("pause");
                system("cls");
                break;
            }
            cout<<"cuanto mide el lado?: "<<endl;
            cin>>lado_;
            poli.setLados(lados);
            poli.setLado(lado_);
            poli.setPeri();
            poli.setArea();
            cout<<"el area es:"<<poli.getArea()<<endl;
            cout<<"el perimetro es: "<<poli.getPeri()<<endl;
            system("pause");
            system("cls");
            break;
        case '6':
            cout<<"gracias,adios!";
            return 0;
        default:
            cout<<"opcion invalida";
            system("pause");
            system("cls");
    }
}
while(opc!=6);
}
#include <iostream>
using namespace std;
class rectangulo{
public:
    void setbase(double);
    double getbase();
    void setaltura(double);
    double getaltura();
    void calcArea();
    double getArea();
private:
    double base;
    double altura;
    double area;

};
void rectangulo::setbase(double base){
    this->base = base;
}
double rectangulo::getbase() {
    return this->base;
}
void rectangulo::setaltura(double altura) {
    this->altura =altura;
}
double rectangulo::getaltura(){
    return this->area;
}
void rectangulo::calcArea(){
    this->area=(this->base*this->altura);
}
double rectangulo::getArea() {
    return this->area;
}


//ends rectangulo class
class cuadrado{
public:
    void setLado(double);
    double getLado();
    void calcArea();
    double getArea();
private:
    double lado;
    double area;

};
void cuadrado::setLado(double lado){
    this->lado = lado;
}
double cuadrado::getLado() {
    return this->lado;
}
void cuadrado::calcArea(){
    this->area=(this->lado*this->lado);
}
double cuadrado::getArea() {
    return this->area;
}

int main() {
double lado_ =0,area=0,base_=0,altura_=0;
cout<<"que desea hacer:\n"<<
"1) cuadrado\n"<<
"2) rectangulo\n";
char opc;
cin>>opc;
switch(opc){
    case '1':
        cuadrado c;
        cout<<"inserte el lado\n";
        cin>>lado_;
        c.setLado(lado_);
        c.calcArea();
        cout<<"el area es "<<c.getArea();
        system("cls>>pause");
        break;
    case '2':
        rectangulo r;

    cout<<"inserte la base\n";
    cin>>base_;
    cout<<"inserte la altura";
    cin>>altura_;
    r.setaltura(altura_);
    r.setbase(base_);
    r.calcArea();
    cout<<"el area es: "<<c.getArea();
    break;
}


}
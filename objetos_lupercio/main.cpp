#include <iostream>
using namespace std;
    class Triangulo { ;
    private:
        double base;
        double altura;
        double area;

    public:
        void setBase(double);
        double getBase();
        void setAltura(double);
        double getAltura();
        void calcArea();
        double getArea();
    };


void Triangulo::setBase(double base) {
    this->base = base;
}

double Triangulo::getBase(){
    return this-> base;
}
void Triangulo::setAltura(double altura){
    this ->altura = altura;
}
double Triangulo::getAltura(){
    return this->altura;
}
void Triangulo::calcArea(){
    this->area=(this->base*this->altura)/2;
}
double Triangulo::getArea(){
    return this->area;
}
double base_,altura_;
int main() {
    Triangulo t;
    system("cls");
    cout<<"ingrese la altura\n";
    cin>>altura_;
    cout<<"ingrese base\n";
    cin>>base_;
    t.setBase(base_);
    t.setAltura(altura_);
    t.calcArea();
    cout<<"el area es "<<t.getArea();
    system("pause>>cls");
    return 0;
}

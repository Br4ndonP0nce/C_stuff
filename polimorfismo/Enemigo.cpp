#include "Enemigo.h"
#include "zombie.h"
using namespace std;
string enemigo::getTipo() const{
    return tipo;
}
void enemigo::setTipo(const string &value) {
    tipo = value;
}
string enemigo::getNombreAtaque() const {
    return nombreataque;
}

void enemigo::setNombreAtaque(const string &value) {
    nombreataque=value;
}
int enemigo::getEnergia() const {
    return energia;
}
void enemigo::setEnergia(int value) {
    energia=value
}
int enemigo::getFuerza() const {
    return fuerza;
}
void enemigo::setFuerza(int value) {
    fuerza=value;
}
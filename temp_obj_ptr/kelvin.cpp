#include  "kelvin.h"
void kelvin::setKelv(double kelv)
{
    this->kelv=kelv;
}

double kelvin::getKelv()
{
    return this->kelv;
}

void kelvin::CalcularKelcel()
{
    kelcel=kelv-273.15;
}

double kelvin::getKelcel()
{
    return this->kelcel;
}

void kelvin::CalcularKelfar()
{
    kelfar=(kelv-273.15)*9/5+32;
}

double kelvin::getKelfar()
{
    return this->kelfar;
}


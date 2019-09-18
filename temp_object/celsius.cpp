//
// Created by Brandon on 12/09/2019.
//

#include "celsius.h"
#include <iostream>

void celsius::setCelcius(double celcius)
{
    this->celc=celcius;
}

double celsius::getCelcius()
{
    return this->celc;
}


void celsius::CalcularCelfa()
{
    celfa=((celc*9/5)+32);
}

double celsius::getCelfa()
{
    return this->celfa;
}

void celsius::CacularCelkel()
{
    celkel=celc+273.15;
}

double celsius::getCelkel()
{
    return this->celkel;
}


#include "farenheit.h"
void farenheit::setFarenheit(double faren)
{
    this->farenheit=faren;
}

double farenheit::getFarenheit()
{
    return this->farenheit;
}

void farenheit::CalcularFarcel()
{
    farcel=(farenheit-32)*5/9;
}

double farenheit::getFarcel()
{
    return this->farcel;
}

void farenheit::CalcularFarkel()
{
    farkel=(farenheit-32)*5/9+273.15;
}

double farenheit::getFarkel()
{
    return this->farkel;
}


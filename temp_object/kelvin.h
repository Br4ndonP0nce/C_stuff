//
// Created by Brandon on 12/09/2019.
//

#ifndef TEMP_OBJECT_KELVIN_H
#define TEMP_OBJECT_KELVIN_H


class kelvin {
private:
    double kelv;
    double kelcel;
    double kelfar;

public:
    void setKelv(double);
    double getKelv();
    void CalcularKelcel();
    double getKelcel();
    void CalcularKelfar();
    double getKelfar();

};


#endif //TEMP_OBJECT_KELVIN_H

//
// Created by Brandon on 12/09/2019.
//

#ifndef TEMP_OBJECT_FARENHEIT_H
#define TEMP_OBJECT_FARENHEIT_H


class farenheit {
private:
    double farenheit;
    double farcel;
    double farkel;
public:
    void setFarenheit(double);
    double getFarenheit();
    void CalcularFarcel();
    double getFarcel();
    void CalcularFarkel();
    double getFarkel();

};


#endif //TEMP_OBJECT_FARENHEIT_H

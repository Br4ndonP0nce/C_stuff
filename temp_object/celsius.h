//
// Created by Brandon on 12/09/2019.
//

#ifndef TEMP_OBJECT_CELSIUS_H
#define TEMP_OBJECT_CELSIUS_H


class celsius {
private:
    double celc;
    double celfa;
    double celkel;

public:
    void setCelcius(double);
    double getCelcius();
    void CalcularCelfa();
    double getCelfa();
    void CacularCelkel();
    double getCelkel();

};


#endif //TEMP_OBJECT_CELSIUS_H

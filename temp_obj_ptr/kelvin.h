#ifndef TEMP_OBJ_PTR_KELVIN_H
#define TEMP_OBJ_PTR_KELVIN_H
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


#endif //TEMP_OBJ_PTR_KELVIN_H

#ifndef PERSONA_PERSONA_H
#define PERSONA_PERSONA_H
using namespace std;

class persona {
public:
    persona();

    void setNombre(string valor);
    string getNombre();
    void setNacionalidad(string valor);
    string getNacionalidad();
    void setEdad(int valor);
    int getEdad();

    void comer(string alimento);
private:
    string nombre;
    string nacionalidad;
    int edad;
};


#endif //PERSONA_PERSONA_H

#ifndef MUSEO_OBRAARTE_H
#define MUSEO_OBRAARTE_H
using namespace std;
#include <iostream>
class ObraArte {
private:
    string titulo;
    string autor;
    string year;
public:
    ObraArte();
    void setTitulo(string valor);
    string getTitulo();
    void setAutor(string author);
    string getAutor();
    void setYear(string anio);
    string getYear();

};


#endif //MUSEO_OBRAARTE_H

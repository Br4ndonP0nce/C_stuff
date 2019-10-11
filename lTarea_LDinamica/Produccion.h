#ifndef LTAREA_LDINAMICA_PRODUCCION_H
#define LTAREA_LDINAMICA_PRODUCCION_H

#include<cstring>
#include<iostream>

using namespace std;
class Produccion
{
public:
    //Pelicula();
    //Serie();
    void setnombre(string);
    string getnombre();
    void setdirector(string);
    string getdirector();
private:
    string nombre,director;

};



#endif //LTAREA_LDINAMICA_PRODUCCION_H

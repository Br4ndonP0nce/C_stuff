#include "Mivgmoz.h"
using namespace std;



void Mivgmoz::menu()
{
    int opc;
    do{
        cout<<"!!! MIVGMOZ !!!"<<endl<<endl;
        cout<<"1) Agregar Peliculas"<<endl;
        cout<<"2) Agregar Serie"<<endl;
        cout<<"3) Listar Peliculas"<<endl;
        cout<<"4) Listar Serie"<<endl;
        cout << "Opcion a elegir: ";
        cin>>opc;
        switch(opc)
        {
            case 1:
                agregarpelicula();
                break;
            case 2:
                agregarserie();
                break;
            case 3:
                listarpeliculas();
                break;
            case 4:
                listarserie();
                break;
            default:
                cout << "Nu ma ingresa un numero valido" << endl;
        }
    }while(opc!=5);

}

void Mivgmoz::agregarpelicula()
{
    if (!peliculas.full())
    {
        string nombre;
        string director;
        int anio;
        string protagonista;
        Pelicula pel;
        cout << "Ingresa los siguiente datos porfavor" <<endl;
        cout << "Nombre de la pelicula: ";
        cin.ignore();
        getline(cin, nombre);
        cout <<"Director de la pelicula: ";
        getline(cin, director);
        cout <<"Anio de la pelicula: ";
        cin >> anio;
        cin.ignore();
        cout <<"Protagonista de la pelicula: ";
        getline(cin, protagonista);
        pel.setnombre(nombre);
        pel.setdirector(director);
        pel.setanio(anio);
        pel.setprotagonista(protagonista);
        peliculas.push_back(pel);
    }
    else
    {
        cout <<"Ya ha ingresado demasiadas Peliculas Senior(a) la capacidad es de 10" <<endl;
    }
}

void Mivgmoz::agregarserie()
{
    if (!series.full())
    {
        string nombre;
        string director;
        int temporadas,capitulos;
        Serie ser;
        cout << "Ingresa los siguiente datos porfavor" <<endl;
        cout << "Nombre de la serie: "<<endl;
        cin.ignore();
        getline(cin, nombre);
        cout <<"Director de la serie: "<<endl;
        getline(cin, director);
        cout <<"Temporadas de la serie: "<<endl;
        cin >> temporadas;
        cin.ignore();
        cout <<"Capitulos de la serie: "<<endl;
        cin>>capitulos;
        cin.ignore();
        ser.setnombre(nombre);
        ser.setdirector(director);
        ser.settemporadas(temporadas);
        ser.setcapitulos(capitulos);
        series.push_back(ser);
    }
    else
    {
        cout <<"Ya ha ingresado demasiadas Series Senior(a) la capacidad es de 10" <<endl;
    }
}



void Mivgmoz::listarpeliculas()
{
    if(peliculas.empty()){
        cout << "No se han agregado peliculas aun" << endl;
        return;
    }

    for(size_t i(0); i < peliculas.size(); i++){
        cout << i+1 << ") Nombre:" << peliculas[i].getnombre() <<endl;
        cout << "De: " << peliculas[i].getdirector() <<endl;
        cout << "Anio: " << peliculas[i].getanio() <<endl;
        cout << "Nombre del prota: " <<peliculas[i].getprotagonista()<< endl;
    }
}

void Mivgmoz::listarserie()
{
    if(series.empty()){
        cout << "No se han agregado series aun" << endl;
        return;
    }

    for(size_t i(0); i < series.size(); i++){
        cout << i+1 << ") " << series[i].getnombre() << endl;
        cout << "De: " << series[i].getdirector() << endl;
        cout << "Temporadas: " << series[i].gettemporadas() << endl;
        cout << "Total de capitulos: " << series[i].getcapitulos() << endl;
    }
}
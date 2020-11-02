#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
#include <string>
#include "computadora.h"
using namespace std;

class Computadora
{
private:
    string sisOperativo;
    string NomEquipo;
    string Marca;
    int Ram;
    int Cant_nucleos;

public:
    Computadora();
    Computadora(const string &sisOperativo, 
                const string &NomEquipo,
                const string &Marca,
                int Ram,
                int Cant_nucleos);
    void setOperativo(const string &v);
    string getOperativo();
    void setNombre(const string &v);
    string getNombre();
    void setMarca(const string &v);
    string getMarca();
    void setRam(int v);
    int getRam();
    void setNucleos(int v);
    int getNucleos();

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << left; 
        out << setw(12) << c.sisOperativo;
        out << setw(10) << c.NomEquipo;
        out << setw(11) << c.Marca;
        out << setw(12) << c.Ram;
        out << setw(10) << c.Cant_nucleos;
        out << endl;

        return out;

    }
    friend istream& operator >>(istream &in, Computadora &c)
    {
        string temp;
        int ram;

        cout << "Sitema Operativo: ";
        getline(cin, c.sisOperativo);

        cout << "Nombre: ";
        getline(cin, c.NomEquipo);

        cout << "Marca: ";
        getline(cin, c.Marca);

        cout << "Ram: ";
        cin>>c.Ram;

        cout << "Cantidad de Nucleos: ";
        cin>>c.Cant_nucleos;

        return in;
        
    }

    bool operator==(const Computadora& s)
    {
        return NomEquipo == s.NomEquipo;
    }
    bool operator==(const Computadora& s) const
    {
        return NomEquipo == s.NomEquipo;
    }
};


#endif
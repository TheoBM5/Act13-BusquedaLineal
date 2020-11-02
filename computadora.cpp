#include "computadora.h"


Computadora::Computadora()
{

}

Computadora::Computadora(const string &sisOperativo, 
                const string &NomEquipo,
                const string &Marca,
                int Ram,
                int Cant_nucleos)
{
    this->sisOperativo = sisOperativo;
    this->NomEquipo = NomEquipo;
    this->Marca = Marca;
    this->Ram = Ram;
    this->Cant_nucleos = Cant_nucleos;
}

void Computadora::setOperativo(const string &v)
{
    sisOperativo = v;
}

string Computadora::getOperativo()
{
    return sisOperativo;
}

void Computadora::setNombre(const string &v)
{
    NomEquipo=v;
}

string Computadora::getNombre()
{
    return NomEquipo;
}

void Computadora::setMarca(const string &v)
{
    Marca=v;
}

string Computadora::getMarca()
{
    return Marca;
}

void Computadora::setRam(int v)
{
    Ram=v;
}
int Computadora::getRam()
{
    return Ram;
}
void Computadora::setNucleos(int v)
{
    Cant_nucleos=v;
}
int Computadora::getNucleos()
{
    return Cant_nucleos;
}
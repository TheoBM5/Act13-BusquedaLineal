
#include <iostream>
#include "arreglo.h"
#include "computadora.h"
using namespace std;

int main(){
    Arreglo<Computadora> computadora;

    Computadora pc1("Windows","Lab1","Lenovo",8, 32);
    Computadora pc2("Ubuntu","Lab2","HP",2,8);
    Computadora pc3("Linux","Lab4","Asus",4,16);
    Computadora pc5("Linux","Lab4","Asus",4,16);
    computadora <<pc1 << pc2 << pc3 << pc5 <<pc3;
    Computadora pc4("Linux","Lab4","Asus",4,16);
    
    Arreglo<Computadora*> ptrs = computadora.buscar_todos(pc5);

    if(ptrs.size() > 0){
        for(size_t i = 0; i< ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout<<*p <<endl;
        }
    }
    else{
        cout<<"No existen coincidencias" <<endl;
    }




    /*Computadora *ptr = computadora.buscar(pc4);
    Computadora *ptr = computadora.buscar(pc4);

    if(ptr != nullptr){
        cout << *ptr <<endl;
    }
    else
    {
        cout<<"No existe"<<endl;
    }
    */

 
    


    /*arreglo2.insertar_inicio("segundo");
    arreglo2.insertar_inicio("primero");
    arreglo2.insertar_final("penultimo");
    arreglo2.insertar_final("final");
    arreglo2.mostrar();
    arreglo2.insertar("Posicion", 2);
    arreglo2.mostrar();


    arreglo2.eliminar_inicio();
    arreglo2.eliminar_final();
    arreglo2.mostrar();

    cout<<endl;
    
    int *v= arreglo2.buscar();
    *v = 20;
    cout<< v << " " << *v << endl;
    arreglo2.mostrar();*/
    return 0;
}
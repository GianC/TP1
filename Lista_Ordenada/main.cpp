#include <iostream>
#include <listaordenadaarr.h>
#include <listaordenadalse.h>

using namespace std;

int main(){

    ListaOrdenadaArr *listaOrdenada = new ListaOrdenadaArr();
    //ListaOrdenadaLSE *listaOrdenada = new ListaOrdenadaLSE();

    unsigned int estado = 1;
    unsigned int seleccion = 0;
    int elemento = 0;

    /*Estados:
         *0| terminar programa
         *1| Vaciar
         *2| Vacia
         *3| Agregar
         *4| Borrar
         *5| Primero
         *6| Ultimo
         *7| Siguiente
         *8| Anterior
         *9| NumElem
         *10| Regresar
         */
        std::cout << "Digite:\n1: Vaciar \n2: Vacía \n3: Agregar \n4: Borrar \n5: Primero \n6: Ultimo"
         "\n7: Siguiente\n8: Anterior\n9: NumElem \n10: Regresar" << std::endl;
        std::cin >> seleccion;
        switch (seleccion) {
            case 1:
                listaOrdenada->Vaciar();
                break;

            case 2:
                if (listaOrdenada->Vacia()){
                    std::cout << "La lista esta vacía." << std::endl;
                }else{
                    std::cout << "La lista no esta vacía." << std::endl;
                }
                system("pause");
                break;

            case 3:
                std::cout << "Digite el elemento para agregar: ";
                std::cin >> elemento;
                listaOrdenada->Agregar(elemento);
                break;

            case 4:
                std::cout << "Digite el elemento para borrar: ";
                std::cin >> elemento;
                listaOrdenada->Borrar(elemento);
                break;

            case 5:
                std::cout << "El primer elemento de la lista es: " << listaOrdenada->Primero();
                break;

            case 6:
                std::cout << "El último elemento de la lista es: " << listaOrdenada->Ultimo();
                break;

            case 7:
                std::cout << "Digite el elemento de el que desea saber el siguiente: ";
                std::cin >> elemento;
                std::cout << "El elemento siguiente es: " << listaOrdenada->Siguiente(elemento) << endl;
                break;

            case 8:
                std::cout << "Digite el elemento de el que desea saber el anterior: ";
                std::cin >> elemento;
                std::cout << "El elemento anterior es: " << listaOrdenada->Siguiente(elemento) << endl;
                break;

            case 9:
                std::cout << "La cantidad de elementos en la lista es" << listaOrdenada->NumElem();
                break;

            case 10:
                default:
                estado = 1;
        }
    return 0;
}

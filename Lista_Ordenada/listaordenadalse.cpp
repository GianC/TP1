#include "listaordenadalse.h"

ListaOrdenadaLSE::ListaOrdenadaLSE()
{
    primero = nullptr;
    ultimo = nullptr;
    contador = 0;
}

void ListaOrdenadaLSE::Iniciar(){}

void ListaOrdenadaLSE::Destruir(){}

void ListaOrdenadaLSE::Vaciar(){
    Nodo *iter = primero;
    Nodo *aux = nullptr;
    while(iter != nullptr){
        aux = iter->siguiente;
        iter = nullptr;
        iter = aux;
    }
    contador = 0;
}

bool ListaOrdenadaLSE::Vacia(){
    bool v = false;
    if(primero == nullptr){
        v = true;
    }
    return v;
}


void ListaOrdenadaLSE::Agregar(int e){
    Nodo *nuevo = new Nodo();
    nuevo->elemento = e;
    if(primero == nullptr || e < primero->elemento){
        nuevo->siguiente = primero;
        primero = nuevo;
    }else{
        Nodo *iter = primero;
        while(iter->siguiente != nullptr && iter->siguiente->elemento < e){
            iter = iter->siguiente;
        }
        if(iter->siguiente == nullptr){
            iter->siguiente = nuevo;
            ultimo = nuevo;
        }else{
            nuevo->siguiente = iter->siguiente;
            iter->siguiente = nuevo;
        }
    }
    contador++;
}

void ListaOrdenadaLSE::Borrar(int e){
    Nodo *aux = nullptr;
    if(primero->elemento == e){
        aux = primero->siguiente;
        primero = nullptr;
        primero = aux;
    }else{
        Nodo *iter = primero;
        while(iter->siguiente->elemento != e){
            iter = iter->siguiente;
        }
        if(iter->siguiente == ultimo){
            iter->siguiente = nullptr;
            iter = ultimo;
        }else{
            aux = iter->siguiente;
            iter->siguiente = iter->siguiente->siguiente;
            aux = nullptr;
        }
    }
    contador--;
}

int ListaOrdenadaLSE::Primero(){
    return primero->elemento;
}

int ListaOrdenadaLSE::Ultimo(){
    return ultimo->elemento;
}

int ListaOrdenadaLSE::Siguiente(int e){
    Nodo *iter = primero;
    int elem = -1;
    while(iter->elemento != e){
        iter = iter->siguiente;
    }
    if(iter->siguiente != nullptr){
        elem = iter->siguiente->elemento;
    }
    return elem;
}

int ListaOrdenadaLSE::Anterior(int e){
    Nodo *iter = primero;
    int elem = -1;
    if(primero->elemento != e){
        while(iter->siguiente->elemento != e){
            iter = iter->siguiente;
        }
        elem = iter->elemento;
    }
    return elem;
}

int ListaOrdenadaLSE::NumElem(){
    return contador;
}

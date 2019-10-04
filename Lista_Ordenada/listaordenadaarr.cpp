#include "listaordenadaarr.h"

ListaOrdenadaArr::ListaOrdenadaArr()
{
    ultimoLleno = -1;
}

void ListaOrdenadaArr::Iniciar(){}

void ListaOrdenadaArr::Destruir(){}

void ListaOrdenadaArr::Vaciar(){
    ultimoLleno = -1;
}
bool ListaOrdenadaArr::Vacia(){
    bool v = false;
    if (ultimoLleno == -1){
        v = true;;
    }
    return v;
}

void ListaOrdenadaArr::Agregar(int e){
    if(ultimoLleno == -1){ //insertar al principio
        lista[0] = e;
        ultimoLleno = 0;
    }else{
        if(e > lista[ultimoLleno]){   //insertar al final
            lista[ultimoLleno+1] = e;
        }else{                      //insertar en el medio
            int iterador = 0;
            while(lista[iterador] < e){
                iterador++;
            }
            for(int i = ultimoLleno; i >= iterador; i--){ //corrimiento
                lista[i+1] = lista[i];
            }
                lista[iterador] = e;
        }
        ultimoLleno++;
    }
}

void ListaOrdenadaArr::Borrar(int e){
    int iter = 0;
    while(lista[iter] != e){
        iter++;
    }
    for(int i = iter; i < ultimoLleno; i++){
        lista[i] = lista[i+1];
    }
    ultimoLleno--;
}

int ListaOrdenadaArr::Primero(){
    return lista[0];
}

int ListaOrdenadaArr::Ultimo(){
    return lista[ultimoLleno];
}

int ListaOrdenadaArr::Siguiente(int e){
    int iterador = 0;
    int elem = -1;
    while(lista[iterador] != e){
        iterador++;
    }
    if(iterador != ultimoLleno){
        elem = lista[iterador + 1];
    }
    return elem;
}

int ListaOrdenadaArr::Anterior(int e){
    int anterior = 0;
    if(lista[0] == e){
        anterior = -1;
    }else{
        int iterador = 1;
        bool encontrado = false;
        while(!encontrado){
            if(lista[iterador] == e){
                encontrado = true;
            }else{
                anterior++;
                iterador++;
            }
        }
        anterior =  lista[anterior];
    }
    return anterior;
}

int ListaOrdenadaArr::NumElem(){
    return ultimoLleno+1;
}


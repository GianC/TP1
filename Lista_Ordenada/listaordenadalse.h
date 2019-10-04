#ifndef LISTAORDENADALSE_H
#define LISTAORDENADALSE_H


class ListaOrdenadaLSE
{
private:
    struct Nodo{
        int elemento;
        Nodo* siguiente;
    };
    Nodo* primero;
    Nodo* ultimo;
    int contador;

public:

    ListaOrdenadaLSE();
    void Iniciar();
    void Destruir();
    void Vaciar();
    bool Vacia();
    void Agregar(int e);
    void Borrar(int e);
    int Primero();
    int Ultimo();
    int Siguiente(int e);
    int Anterior(int e);
    int NumElem();
};

#endif // LISTAORDENADALSE_H

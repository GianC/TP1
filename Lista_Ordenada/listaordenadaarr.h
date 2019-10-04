#ifndef LISTAORDENADAARR_H
#define LISTAORDENADAARR_H


class ListaOrdenadaArr
{
public:
    int lista[100];
    int ultimoLleno;

    ListaOrdenadaArr();

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

#endif // LISTAORDENADAARR_H

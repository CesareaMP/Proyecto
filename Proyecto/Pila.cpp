#include "Pila.h"

void Pila::Add(string a,string n)
{
    Nodepi* aux = new Nodepi();//creacion de nodo auxiliar para guardado de datos
    if (a==" ")
    {
        aux->artista = "desconocido";
    }
    else
    {
        aux->artista = a;
    }
    aux->n_cancion = n;
    aux->next = header;
    header = aux;
}

string Pila::Pop()
{
    Nodepi *aux = header;
    string ayn = aux->n_cancion + "-" + aux->artista;
    header = header->next;
    return ayn;
}

int Pila::Count()
{
    Nodepi* aux = header;
    int contador = 0;
    while (aux!=nullptr)
    {
        contador++;
        aux = aux->next;
    }
    return contador;
}


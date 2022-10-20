#include "Cola.h"

void COLA::Add(string a, string c)
{
	Nodeco* aux = new Nodeco();
	if (a=="")
	{
		a = "desconocido";
	}
	aux->artista = a;
	aux->n_cancion = c;
	aux->next = nullptr;
	if (footer==nullptr)
	{
		footer = aux;
	}
	else
	{
		header->next = aux;
	}
	header = aux;
}

string COLA::Get_song()
{
	Nodeco* aux = footer;
	string ayn = footer->n_cancion+" - "+footer->artista;
	footer = footer->next;
	return ayn;
}

int COLA::Count()
{
	int contador = 0;
	Nodeco* aux = footer;
	while (aux!=nullptr)
	{
		contador++;
		aux = aux->next;
	}
	return contador;
}

void COLA::delet(int index, int max)
{

}
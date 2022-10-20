#include "List.h"

void LIST::Add(string a, string c)
{
	Nodeli* aux = new Nodeli();
	if (a==" ")
	{
		a = "desconocido";
	}
	aux->cancion = c;
	aux->artista = a;
	aux->next = header;
	header = aux;
}

string LIST::Get(int contador)
{
	Nodeli* aux = header;
	while (contador!=0)
	{
		aux = aux->next;
		contador--;
	}
	return aux->cancion + "-" + aux->artista;
}

int LIST::Count()
{
	int contador = 0;
	Nodeli* aux = header;
	while (aux!=nullptr)
	{
		contador++;
		aux = aux->next;
	}
	return contador;
}

void LIST::delete_list()
{
	header = nullptr;
}

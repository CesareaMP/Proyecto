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
	string ayn = footer->n_cancion+"-"+footer->artista;
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
	int contador = index-1;
	Nodeco* siguiente = footer;
	Nodeco* anterior = footer;
	if (index == max)
	{
		while (index - 1 >= 0)
		{
			anterior = anterior->next;
			index--;
		}
		header = anterior;
	}
	else if (index==0)
	{
		footer = footer->next;
	}
	else if (index==1)
	{
		header = footer;
	}
	else
	{
		while (index + 1 >= 0)
		{
			siguiente = siguiente->next;
			index--;
		}
		while (contador >= 0)
		{
			anterior = anterior->next;
			contador--;
		}
		anterior->next = siguiente;
	}
}
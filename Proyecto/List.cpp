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
	//PARA ARTISTA
	if (a != "desconocido")
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (i==0)
			{
				switch (toupper(aux->artista[i]))
				{	
				case 'A':
					aux->valor_artista += 1;
					break;
				case 'B':
					aux->valor_artista += 2;
					break;
				case 'C':
					aux->valor_artista += 3;
					break;
				case 'D':
					aux->valor_artista += 4;
					break;
				case 'E':
					aux->valor_artista += 5;
					break;
				case 'F':
					aux->valor_artista += 6;
					break;
				case 'G':
					aux->valor_artista += 7;
					break;
				case 'H':
					aux->valor_artista += 8;
					break;
				case 'I':
					aux->valor_artista += 9;
					break;
				case 'J':
					aux->valor_artista += 10;
					break;
				case 'K':
					aux->valor_artista += 11;
					break;
				case 'L':
					aux->valor_artista += 12;
					break;
				case 'M':
					aux->valor_artista += 13;
					break;
				case 'N':
					aux->valor_artista += 14;
					break;
				case 'O':
					aux->valor_artista += 15;
					break;
				case 'P':
					aux->valor_artista += 16;
					break;
				case 'Q':
					aux->valor_artista += 17;
					break;
				case 'R':
					aux->valor_artista += 18;
					break;
				case 'S':
					aux->valor_artista += 19;
					break;
				case 'T':
					aux->valor_artista += 20;
					break;
				case 'U':
					aux->valor_artista += 21;
					break;
				case 'V':
					aux->valor_artista += 22;
					break;
				case 'W':
					aux->valor_artista += 23;
					break;
				case 'X':
					aux->valor_artista += 24;
					break;
				case 'Y':
					aux->valor_artista += 25;
					break;
				case 'Z':
					aux->valor_artista += 26;
					break;
				}
			}
			else//si no es desconocido
			{
				switch (toupper(aux->artista[i]))
				{
				case 'A':
					aux->valor_artista += 0.01;
					break;
				case 'B':
					aux->valor_artista += 0.02;
					break;
				case 'C':
					aux->valor_artista += 0.03;
					break;
				case 'D':
					aux->valor_artista += 0.04;
					break;
				case 'E':
					aux->valor_artista += 0.05;
					break;
				case 'F':
					aux->valor_artista +=0.06;
					break;
				case 'G':
					aux->valor_artista += 0.07;
					break;
				case 'H':
					aux->valor_artista += 0.08;
					break;
				case 'I':
					aux->valor_artista += 0.09;
					break;
				case 'J':
					aux->valor_artista += 0.10;
					break;
				case 'K':
					aux->valor_artista += 0.11;
					break;
				case 'L':
					aux->valor_artista += 0.12;
					break;
				case 'M':
					aux->valor_artista += 0.13;
					break;
				case 'N':
					aux->valor_artista += 0.14;
					break;
				case 'O':
					aux->valor_artista += 0.15;
					break;
				case 'P':
					aux->valor_artista += 0.16;
					break;
				case 'Q':
					aux->valor_artista += 0.17;
					break;
				case 'R':
					aux->valor_artista +=0.18;
					break;
				case 'S':
					aux->valor_artista += 0.19;
					break;
				case 'T':
					aux->valor_artista += 0.20;
					break;
				case 'U':
					aux->valor_artista += 0.21;
					break;
				case 'V':
					aux->valor_artista += 0.22;
					break;
				case 'W':
					aux->valor_artista += 0.23;
					break;
				case 'X':
					aux->valor_artista += 0.24;
					break;
				case 'Y':
					aux->valor_artista += 0.25;
					break;
				case 'Z':
					aux->valor_artista += 0.26;
					break;
				}
			}
		}
	}
	else
	{
		aux->valor_artista = 256;
	}
	//PARA CANCION
	for (int i = 0; i < c.length(); i++)
	{
		if (i == 0)
		{
			switch (toupper(aux->cancion[i]))
			{
			case 'A':
				aux->valor_cancion += 1;
				break;
			case 'B':
				aux->valor_cancion += 2;
				break;
			case 'C':
				aux->valor_cancion += 3;
				break;
			case 'D':
				aux->valor_cancion += 4;
				break;
			case 'E':
				aux->valor_cancion += 5;
				break;
			case 'F':
				aux->valor_cancion += 6;
				break;
			case 'G':
				aux->valor_cancion += 7;
				break;
			case 'H':
				aux->valor_cancion += 8;
				break;
			case 'I':
				aux->valor_cancion += 9;
				break;
			case 'J':
				aux->valor_cancion += 10;
				break;
			case 'K':
				aux->valor_cancion += 11;
				break;
			case 'L':
				aux->valor_cancion += 12;
				break;
			case 'M':
				aux->valor_cancion += 13;
				break;
			case 'N':
				aux->valor_cancion += 14;
				break;
			case 'O':
				aux->valor_cancion += 15;
				break;
			case 'P':
				aux->valor_cancion += 16;
				break;
			case 'Q':
				aux->valor_cancion += 17;
				break;
			case 'R':
				aux->valor_cancion += 18;
				break;
			case 'S':
				aux->valor_cancion += 19;
				break;
			case 'T':
				aux->valor_cancion += 20;
				break;
			case 'U':
				aux->valor_cancion += 21;
				break;
			case 'V':
				aux->valor_cancion += 22;
				break;
			case 'W':
				aux->valor_cancion += 23;
				break;
			case 'X':
				aux->valor_cancion += 24;
				break;
			case 'Y':
				aux->valor_cancion += 25;
				break;
			case 'Z':
				aux->valor_cancion += 26;
				break;
			}
		}
		else//si no es desconocido
		{
			switch (toupper(aux->cancion[i]))
			{
			case 'A':
				aux->valor_cancion += 0.01;
				break;
			case 'B':
				aux->valor_cancion += 0.02;
				break;
			case 'C':
				aux->valor_cancion += 0.03;
				break;
			case 'D':
				aux->valor_cancion += 0.04;
				break;
			case 'E':
				aux->valor_cancion += 0.05;
				break;
			case 'F':
				aux->valor_cancion += 0.06;
				break;
			case 'G':
				aux->valor_cancion += 0.07;
				break;
			case 'H':
				aux->valor_cancion += 0.08;
				break;
			case 'I':
				aux->valor_cancion += 0.09;
				break;
			case 'J':
				aux->valor_cancion += 0.10;
				break;
			case 'K':
				aux->valor_cancion += 0.11;
				break;
			case 'L':
				aux->valor_cancion += 0.12;
				break;
			case 'M':
				aux->valor_cancion += 0.13;
				break;
			case 'N':
				aux->valor_cancion += 0.14;
				break;
			case 'O':
				aux->valor_cancion += 0.15;
				break;
			case 'P':
				aux->valor_cancion += 0.16;
				break;
			case 'Q':
				aux->valor_cancion += 0.17;
				break;
			case 'R':
				aux->valor_cancion += 0.18;
				break;
			case 'S':
				aux->valor_cancion += 0.19;
				break;
			case 'T':
				aux->valor_cancion += 0.20;
				break;
			case 'U':
				aux->valor_cancion += 0.21;
				break;
			case 'V':
				aux->valor_cancion += 0.22;
				break;
			case 'W':
				aux->valor_cancion += 0.23;
				break;
			case 'X':
				aux->valor_cancion += 0.24;
				break;
			case 'Y':
				aux->valor_cancion += 0.25;
				break;
			case 'Z':
				aux->valor_cancion += 0.26;
				break;
			}
		}
	}
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

void LIST::delete_last()
{
	header = header->next;
}

void LIST::delete_list()
{
	header = nullptr;
}

void LIST::bubble_sort_cancion(bool can)
{
	Nodeli* anterior = header;
	Nodeli* siguiente;
	int vartista, vcancion;
	string artista, cancion;

	if (can==true)
	{
		while (anterior != nullptr)
		{
			siguiente = anterior->next;
			while (siguiente != nullptr)
			{
				if (anterior->valor_cancion > siguiente->valor_cancion)
				{
					artista = anterior->artista;
					cancion = anterior->cancion;
					vartista = anterior->valor_artista;
					vcancion = anterior->valor_cancion;

					anterior->artista = siguiente->artista;
					anterior->cancion = siguiente->cancion;
					anterior->valor_artista = siguiente->valor_artista;
					anterior->valor_cancion = siguiente->valor_cancion;

					siguiente->artista = artista;
					siguiente->cancion = cancion;
					siguiente->valor_artista = vartista;
					siguiente->valor_cancion = vcancion;
				}
				siguiente = siguiente->next;
			}
			anterior = anterior->next;
		}
	}
	else
	{
		while (anterior != nullptr)
		{
			siguiente = anterior->next;
			while (siguiente != nullptr)
			{
				if (anterior->valor_cancion < siguiente->valor_cancion)
				{
					artista = anterior->artista;
					cancion = anterior->cancion;
					vartista = anterior->valor_artista;
					vcancion = anterior->valor_cancion;

					anterior->artista = siguiente->artista;
					anterior->cancion = siguiente->cancion;
					anterior->valor_artista = siguiente->valor_artista;
					anterior->valor_cancion = siguiente->valor_cancion;

					siguiente->artista = artista;
					siguiente->cancion = cancion;
					siguiente->valor_artista = vartista;
					siguiente->valor_cancion = vcancion;
				}
				siguiente = siguiente->next;
			}
			anterior = anterior->next;
		}
	}
}

void LIST::bubble_sort_artista(bool art)
{
	Nodeli* anterior = header;
	Nodeli* siguiente;
	int vartista, vcancion;
	string artista, cancion;

	if (art == true)
	{
		while (anterior != nullptr)
		{
			siguiente = anterior->next;
			while (siguiente != nullptr)
			{
				if (anterior->valor_artista > siguiente->valor_artista)
				{
					artista = anterior->artista;
					cancion = anterior->cancion;
					vartista = anterior->valor_artista;
					vcancion = anterior->valor_cancion;

					anterior->artista = siguiente->artista;
					anterior->cancion = siguiente->cancion;
					anterior->valor_artista = siguiente->valor_artista;
					anterior->valor_cancion = siguiente->valor_cancion;

					siguiente->artista = artista;
					siguiente->cancion = cancion;
					siguiente->valor_artista = vartista;
					siguiente->valor_cancion = vcancion;
				}
				siguiente = siguiente->next;
			}
			anterior = anterior->next;
		}
	}
	else
	{
		while (anterior != nullptr)
		{
			siguiente = anterior->next;
			while (siguiente != nullptr)
			{
				if (anterior->valor_artista < siguiente->valor_artista)
				{
					artista = anterior->artista;
					cancion = anterior->cancion;
					vartista = anterior->valor_artista;
					vcancion = anterior->valor_cancion;

					anterior->artista = siguiente->artista;
					anterior->cancion = siguiente->cancion;
					anterior->valor_artista = siguiente->valor_artista;
					anterior->valor_cancion = siguiente->valor_cancion;

					siguiente->artista = artista;
					siguiente->cancion = cancion;
					siguiente->valor_artista = vartista;
					siguiente->valor_cancion = vcancion;
				}
				siguiente = siguiente->next;
			}
			anterior = anterior->next;
		}
	}
}

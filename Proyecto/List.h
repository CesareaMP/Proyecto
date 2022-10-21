#pragma once
#include<string>
using namespace std;
class LIST
{
	struct Nodeli
	{
		string cancion;
		string artista;
		Nodeli* next;	
		double valor_cancion;
		double valor_artista;
	};

public:
	void Add(string,string);
	string Get(int);
	int Count();
	void delete_last();
	void delete_list();
	void bubble_sort_cancion(bool);
	void bubble_sort_artista(bool);
private:
	Nodeli* header = nullptr;
};


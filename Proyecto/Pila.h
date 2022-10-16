#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Pila
{
	struct Nodepi
	{
		string artista;
		string n_cancion;
		Nodepi* next;
	};
public:
	void Add(string, string);
	string Pop();
	int Count();
private:
	Nodepi* header = nullptr;
};
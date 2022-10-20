#pragma once
#include <string>
using namespace std;
class COLA
{
	struct Nodeco
	{
		string artista;
		string n_cancion;
		Nodeco* next;
	};
public:
	void Add(string, string);
	string Get_song();
	int Count();
private:
	Nodeco* header = nullptr;
	Nodeco* footer = nullptr;
};
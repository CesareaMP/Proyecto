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
	};

public:
	void Add(string,string);
	string Get(int);
	int Count();
	void delete_last();
	void delete_list();
private:
	Nodeli* header = nullptr;
};


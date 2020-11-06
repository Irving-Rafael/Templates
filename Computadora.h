#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED
#include <iostream>
#include <string>


using namespace std;

class Computadora
{
    string modelo;
    string marca;
    string procesador;
    int ram;
public:
    Computadora();
    Computadora(const string &modelo,
                const string &marca,
                const string &procesador,
                int ram);

    void set_modelo(const string &v);
    string get_modelo();

    void set_marca(const string &v);
    string get_marca();

    void set_procesador(const string &v);
    string get_procesador();

    void set_ram(const int &v);
    int get_ram();



	bool operator == (const Computadora& p)
	{
		return marca == p.marca;
	}
	
	bool operator == (const Computadora& p) const
	{
		return marca == p.marca;
	}

};
#endif // COMPUTADORA_H_INCLUDED

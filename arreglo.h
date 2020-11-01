#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
using namespace std;

template <class T>
class ArregloD
{
    T *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 1000;

public:
    ArregloD();
    ~ ArregloD();
    void insertar_final(const T& v);
    void insertar_inicio(const T& v);
    void insertar(const T& v, size_t p);
    void eliminar_final();
    void eliminar_inicio();
    void eliminar(size_t p);
    size_t size();
    T operator[](size_t p)
    {
        return arreglo[p];
    }
private:
    void expandir();
};

template <class T>
ArregloD<T>::ArregloD()
{
	arreglo = new T[MAX];
	cont = 0;
	tam = MAX;
}

template <class T>
ArregloD<T>::~ArregloD()
{
	delete[] arreglo;
}

template <class T>
void ArregloD <T>::insertar_final(const T& v)
{
	if (cont == tam) {
        expandir();
    }
    arreglo[cont] = v;
    cont++;
}

template <class T>
void ArregloD<T>::insertar_inicio(const T& v)
{
	 if (cont == tam) {
        expandir();
    }
    for (size_t i = cont; i > 0; i--) {
        arreglo[i] = arreglo[i-1]; 
    }
    arreglo[0] = v;
    cont++;
}

template <class T>
void ArregloD<T>::insertar(const T& v, size_t p)
{
	if (p>=cont){
		cout << "Posicion no valida" << endl;
		return;
	}
	if (cont == tam){
		expandir();
	}
	for (size_t i = cont; i > p; i--)
	{
		arreglo[i] = arreglo[i-1];
	}
	arreglo[p] = v;
	cont++;
}

template <class T>
void ArregloD<T>::eliminar_final()
{
	if (cont == 0){
		cout<<"Arreglo vacio"<<endl;
		return;
	}
	cont --;
}

template <class T>
void ArregloD<T>::eliminar_inicio()
{
	if (cont == 0){
		cout<<"Arreglo vacio"<<endl;
		return;
		}
		for (size_t i= 0; i < cont-1; i++){
			arreglo[i] = arreglo[i+1];
		}
		cont--;
}

template <class T>
void ArregloD<T>::eliminar(size_t p)
{
	if (cont == 0){
		cout<<"Arreglo vacio"<<endl;
		return;
	}
	for (size_t i = p; i < cont-1; i++)
	{
		arreglo[i] = arreglo[i+1];
	}
	cont--;

}	

template <class T>
size_t ArregloD<T>::size()
{
	return cont;
}

template <class T>
void ArregloD<T>::expandir()
{
	T *nuevoD = new T[tam+MAX];

    for (size_t i = 0; i < cont; i++) {
        nuevoD[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevoD;
    tam = tam + MAX;
}
#endif

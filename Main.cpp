#include <iostream>
#include "arreglo.h"
#include "Computadora.h"

int main()
{
	ArregloD<Computadora> computadoras;
	
	Computadora c1("Inspiron", "DELL", "Intel", 12);
	Computadora c2("All-in-one", "hp", "AMD", 14);
	
	computadoras << c1 << c2 << c2 << c1;
	Computadora c3("All-in-one1", "hp", "AMD", 12);
	
	ArregloD<Computadora*> ptrs = computadoras.buscar_todos(c3);
	
	if (ptrs.size() > 0)
	{
		for (size_t i=0; i< ptrs.size(); i++)
		{
			Computadora *p = ptrs[i];
			cout << *p << endl;
		}
	}
	else 
	{
		cout << "No exisen coincidencias" << endl;
	}
	/*Computadora *ptr = computadoras.buscar(c3);
	
	if (ptr != nullptr)
	{
		cout << *ptr << endl;
	}
	else 
	{
		cout << "No existe" << endl;
	}
	
	
	//computadora.buscar()
	/*ArregloD<string> arreglo;
	
	//for (size_t i= 0.0; i< 10; i++){
	//	arreglo.insertar_final(i);
	//}
	
	arreglo.insertar_final("Nos");
	arreglo.insertar_final("Vemos");
	arreglo.insertar_inicio("¿Como estas?");
	arreglo.insertar_inicio("Hola");
	arreglo.insertar("no", 2);
	arreglo.eliminar_inicio();
	arreglo.eliminar_final();
	arreglo.eliminar(1);
	
	for (size_t i= 0; i< arreglo.size(); i++){
	cout << arreglo[i]<< " ";
	}
	
	cout << endl;
	
	string *v = arreglo.buscar("¿Como estas?");
	*v = "Nombre";
	
	
	for (size_t i= 0; i< arreglo.size(); i++)
	{
		cout << arreglo[i]<< " ";
	}
	
	cout << v << " " << *v;*/
	
	
	
	
	return 0;
}

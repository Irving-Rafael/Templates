#include <iostream>
#include "arreglo.h"

int main()
{
	ArregloD<string> arreglo;
	
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
	
	
	return 0;
}

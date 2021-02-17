#include "Empleado.cpp"
#include <iostream>
using namespace std;

main(){
	string codigo_empleado,nombres,apellidos,sueldo,puesto,direccion;
	int telefono;
	cout<<"Ingrese codigo del empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	// instanciar un objeto

	Empleado obj = Empleado(codigo_empleado,nombres,apellidos,sueldo,puesto,direccion,telefono);

	obj.mostrar();

system("PAUSE");
}

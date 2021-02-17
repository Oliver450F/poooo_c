// hola_commit
#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
 // atributos
 private : string codigo_empleado; string sueldo; string puesto;
 // constructor
 public:
 Empleado(){

 }

Empleado(string c_e, string nom,string ape,string su,string pue,string dir,int tel) : Persona(nom,ape,dir,tel){  

 codigo_empleado = c_e;
 sueldo = su;
 puesto = pue;

 }

// metodos
//set (modificar)
void setCodigo_empleado(string c_e){codigo_empleado=c_e;}
void setNombres(string nom){nombres=nom;}
void setApellidos(string ape){apellidos=ape;}
void setSueldo(string su){sueldo=su;}
void setPuesto(string pue){puesto=pue;}

//get (mostrar)
string getCodigo_empleado(string c_e){ return codigo_empleado, sueldo, puesto;}
string getNombres(string nom){ return codigo_empleado, sueldo, puesto;}
string getApellidos(string ape){ return codigo_empleado, sueldo, puesto;}
string getSueldo(string su){ return codigo_empleado, sueldo, puesto;}
string getPuesto(string pue){ return codigo_empleado, sueldo, puesto;}

void mostrar(){

	cout<<"________"<<endl;

	cout<<codigo_empleado<<","<<nombres<<","<<apellidos<<","<<puesto<<","<<sueldo<<endl;

}

};

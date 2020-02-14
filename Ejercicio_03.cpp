#include <iostream>

using namespace std;

class Gato{

public:
Gato(int edadInicial, int pesoI);

~Gato();

int ObtenerEdad() const;
int ObtenerPeso() const;

void asignarPeso(int peso);
void AsignarEdad(int edad);

void Maullar();

private:

int suEdad;
int suPeso;

};
//Constructor de Gato
Gato::Gato(int edadInicial, int pesoInicial){

suEdad = edadInicial;

suPeso = pesoInicial;

cout << "se creo un objeto gato de edad de " << edadInicial << endl;

cout << "se creo un objeto gato de peso " << pesoInicial << endl;

}

Gato::~Gato(){

cout << "el objeto gato se destruira en ,3,2, 1,0 adios ...." << endl;

}
// ObtenerEdad, metodo de acceso publico
// regresa el valor de su miembro suEdad

int Gato::ObtenerEdad() const{
return suEdad;
}

int Gato::ObtenerPeso() const{
	return suPeso;

}

// Definicion de AsignarEdad, metodo de
// acceso publico
void Gato::AsignarEdad(int edad){
// asignar a la variable miembro su Edad el
// valor pasado por el parametro edad
suEdad = edad;
}
void Gato::asignarPeso(int peso){

	suPeso = peso;
}
// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miau" << endl;
}
// crear un gato, asignar un valor asu edad, hacer que
// maulle, que nos diga su edad, y que vuelva a maullar.
int main(){
Gato black(4,16);
black.Maullar();

cout << "black es un gato que tiene ";
cout << black.ObtenerPeso() << " kilos" << endl;

cout << "black es un gato que tiene";
cout << black.ObtenerEdad() << " anios " << endl;


black.Maullar();
black.AsignarEdad(6);
black.asignarPeso(12);

cout << "Ahora black tiene " ;
cout << black.ObtenerEdad() << " anios " << endl;
cout << "Ahora black tiene " ;
cout << black.ObtenerPeso() << " kilos" << endl;
return 0;
}

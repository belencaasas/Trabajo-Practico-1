#include "../../../../archivosH/librodehechizos.h"


LibroDeHechizos::LibroDeHechizos():
    ItemsMagicos( "Libro De Hechizos" , 15  , 70 , 25 , "poca"), tipoDeHechizo("Invocacion de entidades sobrenaturales")
{}

void LibroDeHechizos::usarHechizo(){
    cout << "La " << tipoDeHechizo << "esta siendo llevada a cabo.." << endl;
}

void LibroDeHechizos::reparar(){
    durabilidad += 30; //puede mejorar su estado original 
    cout << "El libro de hechizos se ha reparado, su durabilidad es: " << durabilidad << endl;
}
#include "Estudiante.h"

Estudiante::Estudiante(){}
Estudiante::Estudiante(string nombre, string imagenUrl, string email, string password, string doc):Usuario(nombre, imagenUrl, email, password){
     this->documento = doc;
}
void Estudiante::setDocumento(string doc){
     this->documento = doc;
}
string Estudiante::getDocumento(){
     return  this->documento;
}
Estudiante::~Estudiante(){}
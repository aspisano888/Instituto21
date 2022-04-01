#include "Docente.h"

Docente::Docente(){}
Docente::Docente(string nombre, string imagenUrl, string email, string password, string inst):Usuario(nombre, imagenUrl, email, password){
     this->instituto = inst;
}
void Docente::setInstituto(string inst){
     this->instituto = inst;
}
string Docente::getInstituto(){
     return this->instituto;
}
Docente::~Docente(){}
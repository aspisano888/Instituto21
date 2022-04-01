#include "DtDocente.h"

DtDocente::DtDocente(){}
DtDocente::DtDocente(string nombre, string imagenUrl, string email, string password, string inst):DtUsuario(nombre, imagenUrl, email, password){
     this->instituto = inst;
}
string DtDocente::getInstituto(){
     return this->instituto;
}
DtDocente::~DtDocente(){}

ostream & operator << (ostream & salida, DtDocente & doc){
     cout << (DtUsuario)doc << "Instituto: " << doc.instituto << endl;
     return salida;
}
#include "DtEstudiante.h"

DtEstudiante::DtEstudiante(){}
DtEstudiante::DtEstudiante(string nombre, string imagenUrl, string email, string password, string doc):DtUsuario(nombre, imagenUrl, email, password){
     this->documento = doc;
}
string DtEstudiante::getDocumento(){
     return this->documento;
}
DtEstudiante::~DtEstudiante(){}

ostream & operator << (ostream & salida, DtEstudiante & es){
     cout << (DtUsuario)es << "Documento: " << es.documento << endl;
     return salida;
}


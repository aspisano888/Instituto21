#ifndef DTESTUDIANTE_H
#define DTESTUDIANTE_H
#include "DtUsuario.h"
#include <map>
#include <iostream>
using namespace std;

class DtEstudiante:public DtUsuario{
private:
     string documento;
public:
     DtEstudiante();
     DtEstudiante(string nombre, string imagenUrl, string email, string password, string doc);
     string getDocumento();

     ~DtEstudiante();
     friend ostream & operator <<(ostream &, DtEstudiante &);
};

#endif
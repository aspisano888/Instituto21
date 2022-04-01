#ifndef DTDOCENTE_H
#define DTDOCENTE_H
#include "DtUsuario.h"
#include <map>
#include <iostream>
using namespace std;

class DtDocente:public DtUsuario{
private:
     string instituto;
public:
     DtDocente();
     DtDocente(string nombre, string imagenUrl, string email, string password, string inst);
     string getInstituto();

     ~DtDocente();
     friend ostream & operator <<(ostream &, DtDocente &);
};

#endif
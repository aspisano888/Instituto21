#ifndef DOCENTE_H
#define DOCENTE_H
#include "Usuario.h"
#include <map>
#include <iostream>
using namespace std;

class Docente:public Usuario{
private:
     string instituto;
public:
     Docente();
     Docente(string nombre, string imagenUrl, string email, string password, string inst);
     void setInstituto(string);
     string getInstituto();
     ~Docente();
};

#endif
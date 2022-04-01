#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Usuario.h"
#include <map>
#include <iostream>
using namespace std;

class Estudiante:public Usuario{
private:
     string documento;
public:
     Estudiante();
     Estudiante(string nombre, string imagenUrl, string email, string password, string doc);
     void setDocumento(string);
     string getDocumento();
     ~Estudiante();
};

#endif